#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a,b;
        cin>>a>>b;
        string str1,str2;
        cin>>str1>>str2;
        int l1 = str1.length();
        int l2 = str2.length();
        for(int j=0; j<abs(a-b); j=j+1)
        {

            if(l1>=2)
            {
                str1[j+1]=min(str1[j],str1[j+1]);
                str1[j]=str1[j+2];
                str1.erase((max(str1[j],str1[j+1]),1);
            }
            if(str1!=str2)
            {
                str1[j+1]=max(str1[j],str1[j+1]);
                str1[j]=str1[j+2];
                str1.erase((min(str1[j],str1[j+1]),1);
            }



        }
         cout<<str1<<endl;
         if(str1==str2)
            {
                cout<<"YES"<<endl;
            }
            else if(str1!=str2)
            {
                cout<<"NO"<<endl;
            }
    }
}
