#include<iostream>
using namespace std;
int main()
{
  int n,q;
  cin>>n>>q;
  int m1[n+1]={0},m2[n+1]={0};
  int u=0;
  for(int i=0;i<q;i++)
  {
    int x,a,b;
    cin>>x>>a>>b;
    if(x==0)
    {
      m1[a]+=1;
      m1[b+1]-=1;
      u++;
    }
    else{
      if(u)
      {
      for(int i=0;i<n+1;i++)
      {
        
      }
      }


    }
  }
}
