#include<iostream>
#include<bits/stdc++.h>
int x;
using namespace std;
int fn(int a[],int n,int x)
{

  int low, high, mid;
    low = 1;
    high = n;
    while low <= high
      {  mid = (low + high) / 2;
        if (a[mid] == x)
            break;
        else if a[mid] < x
            {
              low = mid+1;
            }
        else{
            high = mid-1;
          }
    return mid

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
    int n,q;
    cin>>n>>q;
    int pos,g=0,l=0;
    int a[n+1];
    for(int i=1;i<n+1;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<q;i++)
    {
      //int x;
      cin>>x;
      x=x;
      for(int i=1;i<n+1;i++)
      {
        if(a[i]<x)
        l++;
        else if(a[i]==x)
        pos=i;
        else
        g++;}
    cout<<fn(a,n,x)<<"\n";




    }
  }



}
