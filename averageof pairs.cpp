#include<iostream>
using namespace std;
long long int b[2002]={0};
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    unsigned long long int ans=0;
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<2002;i++)
    {
      b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      b[a[i]+1000]++;
    }
    for(int i=0;i<2002;i++)
    {
        ans=ans+(b[i]*(b[i]-1))/2;
    }
    for(int i=0;i<2002;i++)
    {
      for(int j=i+2;j<2002;j=j+2)
      {
        if(b[i]!=0 && b[j]!=0)
        {
          if(b[(i+j)/2]!=0)
          ans=ans+b[i]*b[j];

        }
      }
    }


    cout<<ans<<"\n";

  }
}
