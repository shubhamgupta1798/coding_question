#include<bits/stdc++.h>
using namespace std;
bool fn(vector<int> a,vector<int > b)
{
  if(a.size()==0 && b.size()==0)
  return true;
  else if(a.size()==0 || b.size()==0)
  return false;
  for(int i=0;i<a.size();i++)
  {
    if(a[i]>b.size())
    return false;
  }
  for(int i=0;i<b.size();i++)
  {
    if(b[i]>a.size())
    return false;
  }
  int pre[100010]={0};
  for(int i=0;i<a.size();i++)
  {
    pre[a[i]]--;
    pre[0]++;
  }
  for(int i=1;i<100010;i++)
  {
    pre[i]+=pre[i-1];
  }
  for(int i=0;i<b.size();i++)
  {
    pre[i]+=b[i];
  }
  long long int sum=0;
  for(int i=0;i<b.size();i++)
  {
    sum+=pre[i]-(b[i]*2);
    if(sum<0)
    return false;
  }
  if(sum==0)
  return true;
  return false;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int r,c;
    cin>>r>>c;
    int a,b;
    vector <int> m1;
    vector <int> n1;
    long long int sum=0,sum1=0;
    for(int i=0;i<r;i++)
    {

      cin>>a;
      sum+=a;
      if(a>0)
      m1.push_back(a);
    }
    for(int i=0;i<c;i++)
    {

      cin>>b;
      sum1+=b;
      if(b>0)
      n1.push_back(b);
    }
  sort(m1.rbegin(),m1.rend());
  sort(n1.rbegin(),n1.rend());
    if(sum==sum1)
    {
      bool k=fn(m1,n1)||fn(n1,m1);
      if(k)
      cout<<"YES\n";
      else
      cout<<"NO\n";
    }
    else
    {
      cout<<"NO\n";
    }


  }
}
