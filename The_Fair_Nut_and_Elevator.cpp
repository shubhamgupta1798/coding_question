#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  long long int m1=INT_MAX;
    for(int x=0;x<n+1;x++)
    {
        long long int m2=0;
        for(int i=1;i<n+1;i++)
        {
            int up,down;
            up=abs(x-i)+i+x-2;
            //down=x+i+abs(x-i);
        //    if(x==2)
           // cout<<i<<" "<<up<<"\n";
            m2+=a[i-1]*2*up;
        }
        //cout<<"\n"<<m2<<" \n";
        m1=min(m2,m1);

    }
  cout<<m1;
}
