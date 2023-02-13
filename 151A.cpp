#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    int x,y,z,a;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    x=k*l;
    y=x/nl;

    z=c*d;

    a=p/np;

    int ans = min(y,z);
    ans= min(ans,a);
    int f;
    f=ans/n;

    cout<<f<<endl;
}
