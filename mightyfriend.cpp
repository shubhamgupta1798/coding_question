
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int b[100000];
long long int mod=1000000007;
void fb(int n)
{
  if(n>100000)
  return;
  else
  b[n]=(b[n-1]%mod+b[n-2]%mod)&mod;
  return fb(n+1);
}
int main()
{

    int t;
    cin>>t;

  b[0]=1;
  b[1]=1;
  fb(2);
    while(t--)
    {
        int n,m;
        cin>>m>>n;
        int a[m],c[m];
        long long int sum1=0,sum2=0;
        for(int i=0;i<m;i++)
        {cin>>a[i];
          sum1=(sum1%mod+a[i]%mod)%mod;
        }
        for(int i=0;i<m;i++)
      {  cin>>c[i];
        sum2=(sum2%mod+c[i]%mod)%mod;
      }
      if(n<=2)
      {
        long long int ans=sum2*m;
        cout<<ans%mod<<"\n";
      }
      else
      {
        long long int ans=1;
        ans=b[n-2]%mod;
        ans=(((ans*sum2)%mod)*m)%mod;
        ans=(ans+(((b[n-3]*sum1)%mod)*m)%mod)%mod;
        cout<<ans<<"\n";

      }


    }
}
