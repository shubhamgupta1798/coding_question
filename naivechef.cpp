#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    //int a[10001]={0};
    int e,f;
    cin>>e>>f;
    int e2=0,f2=0,b;
    for(int i=0;i<n;i++)
    {
      cin>>b;
      if(b==e)
      e2++;
      if(b==f)
      f2++;
    }
    double ans=(double)(e2*f2)/(double)(n*n);
  printf("%.10f",ans);
  }
}
