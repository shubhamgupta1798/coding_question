#include<iostream>
using namespace std;
int b[100000],c[100000];
int f1(int i,int n)
{
    int j=i,min=b[i],ch=0;

        while(b[i]>0)
        {
            if(b[i]<min)
            min=b[i];

            i++;

        }
        if(min>0){
        for(int k=j;k<i;k++)
        {b[k]=b[k]-min;
        ch++;
        }}

        if(ch>0){

         for(int i=0;i<n;i++)
    {cout<<b[i];}
    cout<<"\n";
        return 1;}
        else
        return 0;



}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {cin>>b[i];
      b[i]=a[i]-b[i];
      c[i]=b[i];
      if(b[i]<0)
      ans=-1;
    }
    //for(int i=0;i<n;i++)
    //{cout<<b[i];}
    //cout<<"\n";
  int final=0;
  if(ans!=-1)
    {while(1)
    {ans=0;

        for(int i=0;i<n;i++)
        {
            if(b[i]!=0)
            ans++;
        }
        if(ans==0)
        break;
        else
        {for(int i=0;i<n;i++)
        {
            final+=f1(i,n);
        }
    }}

    cout<<final<<"\n";}
    else
    cout<<"-1\n";

  }
}
