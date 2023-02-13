#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,c=0;
        cin>>n;
        int x=0;
        for(int j=0; j<=9; j++)
        {

            if(x<n)
            {
                x=pow(10,c);
                cout<<x<<" "<<c<<endl;
                c++;
            }
            else
            {
                break;
            }
        }
        c=c-2;
        int a;
        a=n-pow(10,c);
         cout<<x<<" "<<c<<endl;
        cout<<a<<endl;



    }


}
