#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int x,y,z,l;

    int j;

    j=n*a;

    x=n/m;
    z= n-(x*m);
    y=x*b;


    l=y+b;
    y=y+(z*a);
    if(j>y)
    {
        if(y>l)
        {
            cout<<l;
        }
        else
        {
            cout<<y;
        }
    }else if(j>l)
    {
        if(y>l)
        {
            cout<<l;
        }
        else
        {
            cout<<y;
        }
    }

else
{
    cout<<j;
}

}
