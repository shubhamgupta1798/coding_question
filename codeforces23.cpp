#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long   int n;
    cin>>n;
  long long   int a[n];
  long long   int b[n/2];
    a[0]=0;

    for(int i=0;i<n/2;i++)
    {
      cin>>b[i];
    }
    a[n-1]=b[0];
    for(long long int i=1;i<n/2;i++)
    {
      if(b[i]>a[n-i]+a[i-1])
      {
        a[n-i-1]=a[n-i];
        a[i]=b[i]-a[n-i];
      }
      else
      {
        a[i]=a[i-1];
        a[n-i-1]=b[i]-a[i];
      }
    }
    for(long long int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
}
