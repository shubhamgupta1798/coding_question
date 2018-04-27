#include <stdio.h>
 #include<iostream>
 using namespace std;
 int min(int a,int b)
 {
   if(a>b)
   return b;
   else
   return a;
 }
int  sum1(int set[], int n, int sum,int number)
{

   if (sum == 0)
     return number;
   if (n == 0 && sum != 0)
     return 1000000;

   if (set[n-1] > sum)
     return sum1(set, n-1, sum);
 return min(sum1(set, n-1, sum,number),
                        sum1(set, n-1, sum-set[n-1],number+1));
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
      cin>>b[i];
    }
    long long int ans=0,ans2=0;
    for(int i=0;i<m;i++)
    {
      int c=sum1(a,n,b[i],0);
      if(c!=1000000)
      {
        ans+=c;
        ans2++;
      }


    }
    cout<<ans2<<a
  }
}
