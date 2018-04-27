#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,s,w;
    cin>>n>>s>>w;
    int v[n];
    for(int i=0;i<n;i++)
    cin>>v[i];
    int d[n];
    for(int i=0;i<n;i++)
    {cin>>d[i];
      if(d[i]==0)
      v[i]=-1*v[i];
    }
    int p[n];
    for(int i=0;i<n;i++)
    cin>>p[i];
    int c[n];
    for(int i=0;i<n;i++)
    cin>>c[i];
    double time2=0,time=0,time1=0,ans=0;
    for(int i=0;i<n;i++){
 
    time=(double)w/(double)s+ans;
    time2=(double)((-1)*p[i])/(double)v[i]-ans;
    if(v[i]<0)
    time1=(double)(-1)*(p[i]+c[i])/(double)v[i];
    else
      time1=(double)(-1)*(p[i]-c[i])/(double)v[i];

     // cout<<time1<<" "<<time2<<" "<<time;

    if(time1<0)
    ans=time;
    else
    {
      time1=time1-ans;
      if(time2-time>0.000001)
      ans=time;
      else
      ans=time+time1;

    }
  }
    printf("%.6f\n",ans);

  }
}
