#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long min(long long a,long long b)
{
  if(a>b)
  return b;
  else
  return a;
}
#define mod 1000000007
int main()
{
  int n,k;
  cin>>n>>k;
  //int a[n];
  int a[8002]={0};
  for(int i=0;i<n;i++)
  {
    int c;
    cin>>c;
    a[c]++;
  }
  vector<int> v;
  for(int i=0;i<8002;i++)
  {
    if(a[i]>0)
    v.push_back(a[i]);
  }

  long long int dp[v.size()+10][v.size()+10][2];
  for(int i = 1;i<=v.size();i++){
        dp[0][i][0] = 1;
        dp[i][0][0] = 1;
        dp[i][1][1] = v[i-1];
    }
    dp[1][1][0] = 0;
    for(int i = 2; i<=v.size();i++){
        for(int j = 1;j<=i;j++){
            dp[i][j][1] = ( (dp[i-1][j-1][1]*v[i-1])%mod + (dp[i-1][j-1][0]*v[i-1])%mod)%mod;
            dp[i][j][0] = (dp[i-1][j][1] + dp[i-1][j][0])%mod;
        }
    }

    long long  ans = 1;
    for(int i = 1;i<=min(k,v.size());i++){
        for(int j = i;j<=v.size();j++){
            ans= (ans + dp[j][i][1])%mod ;
        }
    }
    cout << ans << "\n";

}
