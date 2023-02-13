#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;
int main()
{
  int arr1[5],n;

  for(int i=0;i<4;i++)
  {
      cin>>arr1[i];
  }
  string str1;
  cin>>str1;
  int sum=0;
  int len=str1.length();

  for(int i=0; i<len;i++)
  {

      int a=str1[i]-'0';  // String array value fetch

      sum=sum+arr1[a-1];

  }
  cout<<sum;
}
