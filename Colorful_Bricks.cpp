#include<iostream>
using namespace std;
long long int mod=  998244353;
long long int fc(long long int k)
{
 long long int  ans=1;
  for(int i=2;i<k+1;i++)
  {
    ans=(ans*i)%mod;
  }
  return ans%mod;
}
long long int fn(long long int n,long long int m,long long int k)
{
  return (fc(k+1)*m)%mod;
}

int main()
{
  int n,m,k;
  cin>>n>>m>>k;
  cout<<fn(n,m,k);
}
