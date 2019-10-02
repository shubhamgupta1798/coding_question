#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define mod 1000000007
long long int max(long long int a,long long int b){
  if(a>=b)
  return a;
  else
  {//cout<<b<<"c::::"<<c1<<":";
  return b;}
}
vector<string> v;
void ch(string s1,string s2)
{
  string s3=s1;
  string s4=s2;
  if(s3[s1.size()-1]==' ')
  {
    s3.pop_back();
  }
  else if(s4[s2.size()-1]==' ')
  s4.pop_back();
  string s=s3+s4;
  cout<<s<<"\n";
  v.push_back(s);
  return;
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
 long long int t;
  int n,m;
  cin>>n>>m;
  int a[m][2];
  for(int i=0;i<m;i++)
  {
    cin>>a[i][0]>>a[i][1];
  }
  //cout<<n-1<<"\n";
  string s="";
  string s2="";
  int k1=ceil(n/2.0);
    for(int i=0;i<k1;i++){
  s2=s2+"1";

s=s+"0";}
if(n%2!=0)
s[k1-1]=' ';
ch(s2,s);
for(int i=2;i<=k1;i++)
{
  for(int j=i;j<=k1;j=j+i)
  {
    char cm=s[j-1];
    s[j-1]=s2[j-1];
    s2[j-1]=cm;
  }
  ch(s2,s);
}
//cout<<s2<<"\n"<<s;



}
