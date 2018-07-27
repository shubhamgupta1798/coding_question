#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct a1{
  string s;

}b1[2000];
int main()
{
  int n,m;
  cin>>n>>m;
  int a[n]={0};
  for (int i = 0; i < n; i++) {
    cin>>b1[i].s;

    /* code */
  }
  int e,f;
  for(int j=0;j<m;j++)
  {
    e=0;
    f=-1;
    for(int i=0;i<n;i++)
    {
        //cout<<b1[i].s[j];
      if(b1[i].s[j]=='1'){
        e++;
        f=i;      }
    }
    if(e==1)
    {
        //cout<<f;
      a[f]++;
    }
    cout<<"\n";
    //cout<<'e'<<e;
  }
  int ans=0;
 // cout<<n;
  for(int i=0;i<n;i++)
  {
    //  cout<<a[i];
    if(a[i]==0)
    {
      ans++;
      break;
    }
  }
  if(ans==0)
  cout<<"NO";
  else
  cout<<"YES";

}
