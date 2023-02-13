#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int arr[n];
        arr[0]=n;
        cout<<arr[0]<<" ";
        for(int j=1;j<n;j++)
        {
            arr[j]=j;
             cout<<arr[j]<<" ";
        }

        cout<<endl;

    }
}
