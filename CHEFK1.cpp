// reference https://codeforces.com/contest/1209/submission/60539449
#include<bits/stdc++.h>
#include<iostream>
using namespace std;



int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,m;
    cin>>n>>m;
    if(n==1||n==2)
    {
      if(n==1)
      {
        if(m==0)
        cout<<"0\n";
        else if(m==1)
        cout<<"1\n";
        else
        cout<<"-1\n";
      }
      else{
        if(m==0)
        cout<<"-1\n";
        else if(m<3)
        cout<<m<<"\n";
        else if(m==3)
        {
          cout<<"2\n";
        }
        else
        cout<<"-1\n";
      }

    }
    else if(m>=n-1 && m<=((n*(n+1))/2)){

      if(m<=n+1)cout<<"2\n";
      else if(m<=2*n)cout<<"3\n";
      else{

        long long int ans=3;
        m-=2*n;
      ans+=ceil((2.0*(double)m)/(double)n);
    cout<<ans<<"\n";}
    }
    else{
    cout<<"-1\n";}
  }
}
