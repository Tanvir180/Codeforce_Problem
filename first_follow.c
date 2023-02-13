#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

char production[20][20];
char f[100];
char uniqueVariable[100];
int count,n=0,m=0,flag=0;

void findfirst(char c);
void findfollow(char c);

int main()
{
    char c;
    printf("The number of productions:\n");
    scanf("%d",&count);

    printf("Enter the productions:\n");
    //input the grammar
    for(int i=0; i<count; i++)
    {
        scanf("%s",&production[i]);
    }
    for(int i=0; i<count; i++)
    {
        uniqueVariable[i]=production[i][0];         //Here all left side Variable is assigned in done array
    }

    // Variable can be duplicate so duplicate variable is replaced by !
    for(int i=0; i<count; i++)
    {
        for(int j=0; j<count; j++)
        {
            if(uniqueVariable[i]==uniqueVariable[j]&&i!=j)
            {
                uniqueVariable[j]='!';
            }
        }
    }

    // first function call
    for(int i=0; i<count; i++)
    {
        n=0;
        c=uniqueVariable[i];
        if(isalpha(c))          // Check in c the variable is alphabet or not
        {
            findfirst(c);      //Call Findfirst Function
            printf("First Of (%c) = {",c);
            for(int j=0; j<n; j++)
            {
                printf(" %c ",f[j]);    //Print Individual first
            }
            printf("}\n");
            strcpy(f," ");       // Empty the f array
            n=0;
            findfollow(c);    //Call findfollow function
            printf("Follow Of (%c) = {",c);
            for(int j=0; j<n; j++)
            {
                printf(" %c ",f[j]);
            }
            printf("}\n");
        }
    }
}
void findfirst(char c)
{

    // lower letter hole direct first e jabe
    if(islower(c))
    {
        f[n++]=c;   //string hisebe chinta korche and increase value 1 of f array
    }

    //nahole jotogula same nonterminal thkbe sob gular first ber korbo
    for(int i=0; i<count; i++)
    {
        if(production[i][0]==c)
        {
            if(production[i][2]=='#')  // # mane epsilon. = erpr elsilon pele first e jabe
            {
                f[n++]='#';
                findfollow(production[i][0]);
            }
            else if(islower(production[i][2]))   //terminal pele first e jbe
                f[n++]=production[i][2];
            else
                findfirst(production[i][2]);    // Non-terminal pele call again findfirst function
        }
    }

}

void findfollow(char c)
{

    if(production[0][0]==c)    //We know that first production of the  grammar has always "$" in the follow
        f[n++]='$';
    for(int i=0; i<count; i++)   // For total production
    {
        for(int j=2; j<strlen(production[i]); j++)   // For Every production
        {
            if(production[i][j]==c)         // Individual value
            {
                if(production[i][j+1]!='\0')   // If next is not null (variable/terminal) then find its first
                    findfirst(production[i][j+1]);
                if(production[i][j+1]=='\0'&& c!=production[i][0])  // if there is null for next array index and left side  right side will not same then we will call lest side follow
                    findfollow(production[i][0]);
            }
        }
    }
}
