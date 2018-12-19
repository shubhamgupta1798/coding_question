#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  int n;
  char final[100];
  char final1[100];
  char s1[300],s2[300];

int main()
{

  cin>>n;

  int k=2*n-2;
  string s;

  s1[0]='S';
  s2[0]='P';
  int c0=1,c1=1;
for(int i=0;i<300;i++)
{
  final[i]=0;
  final1[i]=0;
}
  for(int i=0;i<k;i++)
  {
    cin>>s;

    if(i==0)
    {
      for(int j=0;j<s.size();j++)
      {
        final[j]=s[j];
        final1[n-j-1]=s[j];
      }
      else
      {
        if(c0){
        for(int j=0;j<s.size();j++)
        {
          if(final[j]==0)
          {
            break;
          }
          else
          {
            if(final[j]==s[j])
            {
              continue;
            }
            else
            {
              break;
            }
          }
        }
      }
      }
    }


  }
}
