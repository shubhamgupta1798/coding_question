#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define mod 1000000007
long long int max(long long int a,long long int b){
  if(a>=b)
  return a;
  else
  {//cout<<b<<"c::::"<<c1<<":";
  return b;}
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
 long long int t;
  cin>>t;
  while(t--)
  {
 long long int a,b,c;
    cin>>a>>b>>c;
    a--;
    c--;

    long long int ans=0;
    for(int i=1;i<=b;i++)
    {
      for(int j=1;j<=i;j++)
      {
        double c1=(double)i*(double)i/(double)(j);

       long long int c2=ceil(c1);
        if(c1==c2)
        c2++;

    if(j<=a)
        ans=(ans+max(0,c-c2+1))%mod;
        if(j<=c)
        ans=(ans+max(0,a-c2+1))%mod;

    }
    if(a>i && c>i)
    ans=(ans+max(0,((a-i)*(c-i))%mod))%mod;
  }

    cout<<ans<<"\n";
  }

}
