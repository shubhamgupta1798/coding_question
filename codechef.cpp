#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s;
cin>>s;
int a=0,b=0;
for(int i=0;i<s.size();i++)
{
if(s[i]=='o')
a++;
else
b++;
}
if(a==0)
cout<<"YES";
else if(b==0)
cout<<"YES";
else
{
if(a>b)
{
if(a%b==0)
cout<<"YES";
else
cout<<"NO";
}
else
{
if(b%a==0)
cout<<"YES";
else
cout<<"NO";

}
}
}
