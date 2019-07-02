#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int k;
  cin>>k;

  int a[n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int dp[n+109];
  dp[0]=0;
  for(int i=1;i<n+109;i++)
  {
    dp[i]=INT_MAX;
  }
  //dp[1]=abs(a[1]-a[0]);
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<=i+k;j++)
    if(j<n){
      dp[j]=min(dp[i]+abs(a[j]-a[i]),dp[j]);
    }

  }
  cout<<dp[n-1];
}
