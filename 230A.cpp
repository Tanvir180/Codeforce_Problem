#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    int x,y,c=0;

    multimap<int,int>m;            // it can be string also
    for(int i=0; i<n; i++)
    {

        cin>>x>>y;
        m.insert({x,y});
    }

    for(auto it=m.begin();it!=m.end();it++) //iterator
    {
        if(s>it->first)
        {
            s=s+it->second;
            c++;
        }
    }
    if(c==n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}

