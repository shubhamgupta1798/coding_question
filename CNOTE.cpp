#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x,y,c,n;
      cin>>x>>y>>c>>n;
      if(x<=y)
      {
        int e1,e2;
        for(int i=0;i<n;i++)
        {
          cin>>e1>>e2;
        }
        cout<<"LuckyChef\n";
      }
      else
      {
        x=x-y;
        int flag=0;
        int e1,e2;
        for(int i=0;i<n;i++)
        {
          cin>>e1>>e2;
          if(e1>=x)
          {
            if(e2<=c)
            {
              flag++;
            }
          }
        }
        if(flag==0)
        {
          cout<<"UnluckyChef\n";
        }
        else
        {
          cout<<"LuckyChef\n";
        }
      }
  }
}
