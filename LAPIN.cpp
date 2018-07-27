#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int v=s.size()/2;
    int a[26]={0},b[26]={0};
    for(int i=0;i<v;i++)
    {
      a[s[i]-'a']++;
    }
    if(s.size()==2*v)
    {
      for(int i=v;i<s.size();i++)
      {
        b[s[i]-'a']++;
      }
    }
    else
    {
      for(int i=v+1;i<s.size();i++)
      {
        b[s[i]-'a']++;
      }
    }
    int flag=0;
    for(int i=0;i<26;i++)
    {
      if(a[i]==b[i])
      continue;
      else
      {
        flag++;
        break;
      }
    }
    if(flag==0)
    {
      cout<<"YES\n";

    }
    else
    {
      cout<<"NO\n";
    }
  }
}
