#include<iostream>
using namespace std;
int main()
{
  long int n,m,k;
  cin>>n>>m>>k;
 long long int a[n],p[m];
  for(long long int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(long long int  i=0;i<m;i++)
  cin>>p[i];
  //int b[n],max2;
 // long long int pro=1,max=0,ans=0;
  for(int j=0;j<n;j++)
  {
      if(a[j]+k<p[m-1])
      a[j]=a[j]+k-2;
      else
      a[j]=p[m-1]-1;
  }
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
}
