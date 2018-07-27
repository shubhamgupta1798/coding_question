#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;






int main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int n,k;
   cin>>n>>k;
   int a[i];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   sort(a,a+n);
   int b,ans=0,e=0;
   b=a[0];
   int f=1;
   for(int i=1;i<n;i++)
   {
     if(a[i-1]==a[i])
     f++;
     else
   {
     b=a[i];
     if(f==k)
     ans++;
     f=1;

   }
   }
   cout<<ans<<"\n"

 }
}
