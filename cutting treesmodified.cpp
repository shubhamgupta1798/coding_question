#include<iostream>
using namespace std;
int b[100000],a[100000];

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,ans=0;
    cin>>n;

    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {ans=-1;
            break;}
      if(a[i]!=b[i])
      {ans++;
        for(int j=i;j<n;j++)
        {
          if(a[j]<max || b[j]>max)
        break;
        else
        a[j]=max;

        }

      }
    }
    cout<<ans<<"\n";



}
}
