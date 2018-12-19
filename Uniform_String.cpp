#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
  int n,k;
  cin>>n>>k;
  int l=n/k;
  int l2=n-l*k;
  char c='a';
  for(int i=0;i<l2;i++)
  {
    cout<<c;
  }
  for(int i=0;i<k;i++)
{  for(int j=0;j<l;j++)
  {
    cout<<c;

  }
c++;
}
  cout<<"\n";
}}
