#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  cin>>a[0];
  int min1=a[0];
  for(int i=1;i<n;i++)
  {
    cin>>a[i];
    min1=min(min1,a[i]);
  }
  int f=0;
  for(int i=0;i<n-2;i++)
  {
    if((a[i+1]-a[i])%2==1 && (a[i+2]-a[i])==0)
    {
      f++;
    }
  }
  if(f==0)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }


}
