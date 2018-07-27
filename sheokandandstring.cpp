#include<iostream>
using namespace std;
struct a1{
  string s;
}
int find(string s1,string s2)
{
  int l=0;
  int n=s2.size();
  for(int i=0;i<s1.size();i++)
  {
    if(n==i)
    break;
    else if(s1[i]!=s2[i])
    break;
    else
    l++;
  }
  return l;
}
int main()
{
  int n;
  a1 b[n];
  for(int i=0;i<n;i++)
  {
    cin>>b[i].s;

  }
  int q;
  cin>>q;
  while(q--)
  {
    int r;
    string s2
    cin>>r>>s2;
    int max=0,index=0;
    for(int i=0;i<r;i++)
    {
      int e=find(s2,b[i].s);
      if(e>max)
      {
        max=e;
        index=i;
      }
    }
    cout<<b[i].s<<"\n";
  }
}
