#include<stdio.h>
#include<ctype.h>

char production[20][20];
char first[100];
char follow[100];
char done[100];
int count,n=0,k=0,flag=0;

void findfirst(char c);

int main()
{
    char c;
    printf("Enter the number of production rules:\n");
    scanf("%d",&count);

    printf("Enter the production rules (E=T+R) :\n");
    //input the grammer
    for(int i=0;i<count;i++){
        scanf("%s",&production[i]);
    }
     for(int i=0;i<count;i++){
        done[i]=production[i][0];
     }
     for(int i=0;i<count;i++){
            for(int j=0;j<count;j++){
                    if(done[i]==done[j]&&i!=j)
                    {
                        done[j]='!';
                    }
            }
     }

        // first function call
        for(int i=0;i<count;i++){
                n=0;
        c=done[i];
        if(isalpha(c)){
        findfirst(c);
        printf("First (%c) = {",c);
            for(int j=0;j<n;j++){
                printf(" %c ",first[j]);
            }
         printf("}\n");
        }
        }
}
void findfirst(char c){

    // lower letter hole direct first e jabe
    if(islower(c)){
        first[n++]=c;   //string hisebe chinta korche
    }

    //nahole jotogula same nonterminal thkbe sob gular first ber korbo
    for(int i=0;i<count;i++){
        if(production[i][0]==c)
        {
            if(production[i][2]=='#')  // # mane epsilon. = erpr elsilon pele first e jabe
                first[n++]='#';
            else if(islower(production[i][2]))   //terminal pele first e jbe
                first[n++]=production[i][2];
            else
                findfirst(production[i][2]);    // Non-terminal pele call again
        }
    }

}
