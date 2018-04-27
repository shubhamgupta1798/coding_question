#include<iostream>
using namespace std;
long int mod=1000000007;
long long int n1(long long int n)
{


if(n==0)
return 1;
  if(n%2==0)
  return ((n1(n/2)%mod)*(n1(n/2)%mod))%mod;
  else
  return (10*((n1((n-1)/2)%mod)*(n1((n-1)/2)%mod)))%mod;

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int ans=0;
    long long int n,w;
    cin>>n>>w;
    if(w>8 || w<-9)
    cout<<"0\n";
    else
    {
      if(w<0)
      {w=w*-1;
      ans=1;
      }
      ans=ans+9-w;
      cout<<(ans*n1(n-2))%mod<<"\n";
    }
  }

}
