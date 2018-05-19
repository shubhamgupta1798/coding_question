#include<iostream>
using namespace std;
#define ll long long
#define d double
#define rp(n) for(int i = 0 ; i <n ; i++)
#define rp1(n) for(int i = 1 ; i <n ; i++)
int gcd(int a,int b)
{
  if(a==0)
  return 1;

  else
  return gcd(b%a,a);

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    rp(n){
      cin>>a[i];

    }
    ll ans,cnt=0;
    ans=a[0];
    ll a2=a[0];
    rp1(n)
    {
    ans= gcd(ans,a[i]);
    if(ans==1)
    {
      cout<<"0";
      return 0;

    }


    }
    cout<<"-1";
    return 0;



  }
}
