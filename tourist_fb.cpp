#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int j=0;j<t;j++)
  {
    long long int n,k,v;
    cin>>n>>k>>v;
    int a[n]={0};
    string s[n];
    for(int i=0;i<n;i++)
    {cin>>s[i];
    //cout<<s[i];
    }cout<<"Case #"<<j+1<<": ";
    if(k>n){
        for(int i=0;i<n;i++)
        a[i]=1;
    }
    else
    {
        for(int i=0;i<k;i++)
        {
            a[(i+(v-1)*k)%n]=1;

        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        cout<<s[i]<<" ";
        //cout<<s[i];
        //cout<<a[i]<<" ";
    }
    cout<<"\n";
  }
}
