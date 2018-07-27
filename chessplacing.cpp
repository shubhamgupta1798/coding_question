#include<iostream>
#include<bits/stdc++.h>
long long int mod(long long int a)
{
    if(a>0)
    return a;
    else
    return -1*a;
}
using namespace std;
int main()
{
  long long int n;
  cin>>n;
  long long int a[n/2];
  for(int i=0;i<n/2;i++)
  cin>>a[i];
  sort(a,a+n/2);
  long long int a1=n-1,a2=n;
 long long  int ans1=0,ans2=0;
  for(int i=n/2-1;i>=0;i--)
  {
    ans1+=mod(a1-a[i]);
    a1-=2;
    ans2+=mod(a2-a[i]);
    a2-=2;
  }
  //cout<<ans1<<ans2;
  if(ans1>ans2)
  cout<<ans2;
  else
  cout<<ans1;


}
