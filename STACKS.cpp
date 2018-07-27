#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    stack <int > s[n];
    int number=0,x;
    cin>>x;
    s[0].push(x);
    for(int i=1;i<n;i++)
    {
      cin>>x;
      int f=0;
      for(int j=0;j<=number;j++)
      {
        if(s[j].top()>x)
        {
          f++;
          s[j].push(x);
          break;
        }
      }
      if(f==0)
      {
        number++;
        s[number].push(x);
      }
    }
    cout<<number+1;
    for(int i=0;i<=number;i++)
    {
      cout<<" "<<s[i].top();
    }
    cout<<"\n";
  }
}
