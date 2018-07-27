#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[101]={0},x;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    a[x]++;
  }
  int max1=0;
  for(int i=0;i<101;i++)
  {
    if(a[i]>max1)
    max1=a[i];
  }
  cout<<max1;

}
