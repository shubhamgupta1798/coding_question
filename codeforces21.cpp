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
    int f=0;
    set<char> s1;
    int n=s.size();
    for(int i=0;i<s.size()/2;i++)
    {
      if(s[i]==s[n-i-1])
      {

        continue;
      }
      else{
        f++;
        break;
      }
    }
    if(f==0)
    {
      sort(s.begin(),s.end());
      if(s[0]==s[n-1])
      {
        cout<<"-1\n";
      }
      else
      {
        cout<<s<<"\n";
      }
    }
    else
    {
      cout<<s<<'\n';
    }
  }
}
