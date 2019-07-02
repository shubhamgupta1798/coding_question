#include<bits/stdc++.h>
using namespace std;

int mask(long long int a)
{
 int k=0;
  while(a>0)
  {
    k=k|(1<<a%10);
    a=a/10;
  }
  return k;
}
bool we_can_insert(long long int j,long long int k)
{
  if((mask(k)&j)==0)
  return true;
  else
  return false;
}
int main()
{
  long long int t;
  cin>>t;
  while(t--){
  long long int n;
  cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
}
  long long int dp[n][1024];
for(int i=0;i<n;i++)
{
  for(int j=0;j<1024;j++)
  {
    dp[i][j]=0;
  }
}

  dp[0][mask(a[0])] = a[0];
  long long int max1=a[0];
  for(int i=1;i<n;i++)
  {
    for(int j=0;j<1024;j++)
    {
        int temp=mask(a[i]);
      if(we_can_insert(j,a[i])){
        dp[i][j|temp]=max(dp[i][j|temp],dp[i-1][j] + a[i]);
      //    max1=max(max1,dp[i][j|temp]);
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    max1=max(max1,dp[i][1023]);
  }
  cout<<max1<<"\n";





}
}
