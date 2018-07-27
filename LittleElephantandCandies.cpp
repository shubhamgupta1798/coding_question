#include<iostream>
usingn namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    //int a[n];
    long long int x=0,e,f=0;
    for(int i=0;i<n;i++)
    {
      cin>>e;
      x+=e;
      if(x>m)
      {
        f++;
        break;
      }
    }
    if(f)
    {
      cout<<"No\n";
    }
    else
    {
      cout<<"Yes\n";
    }
  }
}
