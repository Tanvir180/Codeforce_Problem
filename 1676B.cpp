#include<bits/stdc++.h>
using namespace std;
#define size(arr) sizeof(arr)/sizeof(arr[0]);
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x,c=0;
        cin>>x;
        int arr[x];

        for(int j=0; j<x; j++)
        {
            cin>>arr[j];
            //  sort(arr,arr+s);
        }
        sort(arr,arr+x);
       for(int i=0;i<x;i++)
       {
           if(arr[0]<arr[i])
           {
             int sum = arr[i]-arr[0];
             c=c+sum;
           }
       }

        cout<<c<<endl;

    }
    }
