#include<bits/stdc++.h>
using namespace std;
long long int power(int x, unsigned int y)
{
    long long int temp;
    if( y == 0)
        return (long long int)1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int f0=0;
    int f1=1;
    int a[70];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<70;i++)
    {
      a[i]=(a[i-1]+a[i-2])%10;
    //  cout<<a[i]<<" ";
    }
  long long   int m;
    cin>>m;
    int len=0;
    while(m>0)
    {
      len++;
      m=m/2;

    }
//cout<<len;
long long int p=power(2,len-1);
p--;
cout<<a[p%60]<<"\n";
  }
}
