#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int p[100001]={0};
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      p[a[i]]++;
    }

int f=0;
    for(int i=0;i<100001;i++)
    {
      if(p[i]!=0){
      if(p[i]+i>=n)
      {
        continue;
      }
      else
      {
        f++;
        break;
      }
      }

    }
    int b[n];
    if(f==0)
    {
      cout<<"Possible\n";
      int l1=1;
      for(int i=0;i<100001;i++)
      {
        if(p[i]!=0)
        {
        int m1=n-i;
        int m2=m1;
          for(int j=0;j<n;j++)
          {

            if(a[j]==i)
            {
              //  if(i==7)
             // {
               //   cout<<m2<<l1<<"..  ..";
             // }
              b[j]=l1;
            if(j!=n-1){
            m2--;
            if(m2==0)
            {
              l1++;
              m2=m1;
            }
            }
            }
          }
          l1++;
        }
      }
      for(int i=0;i<n;i++)
      {
          cout<<b[i]<<" ";
      }
    }
    else
    {
      cout<<"Impossible";
    }


}
