#include<iostream>
using namespace std;
double area(double dX0, double dY0, double dX1, double dY1, double dX2, double dY2)
{
    double dArea = ((dX1 - dX0)*(dY2 - dY0) - (dX2 - dX0)*(dY1 - dY0))/2.0;
    return (dArea > 0.0) ? dArea : -dArea;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,r;
    cin>>n>>k>>r;
    int b[n],x0,x1,x2,y0,y1,y2,max,min,i0,i1,i2;
    x0=100000;
    int a[x0][x0];
    y0=x0;
    x1=-1*x0;
    y1=x1;
    min=2*x0;
    max=2*x1;

    int x,y;
    for(int i=1;i<n+1;i++)
    {int c=0;
      cin>>x>>y;
      if(a[x][y]==1)
      {
        for(int i=0;i<r;i++)
        {
          for(j=0;j+i<r;j++)
          {
            if(a[i+x][j+y]==1)
            continue;
            else
            {a[i+x][j+y]=1;
              x=x+i;
              y=y+j;
              c++;
              break;
            }
          }
          if(c!=0)
          break;
        }
      }
      if(x+y<min)
      {
        i0=i;
        x0=x;
        y0=y;
        min=x+y;
      }
      if(x+y>max)
      {
        i1=i;
        x1=x;
        y1=y;
        max=x+y;
      }


    }
    int max_area=0,area1;
    for(int i=1;i<n+1;i++)
    {
      if(i!=i0 && i!=i1)
      {area1=area((double)x0,(double)y0,(double)x1,(double)y1,(double)a[i][0],(double)a[i][1]);
        if(area1>max_area)
        {
          max=area1;
          x2=a[i][0];
          y2=a[i][1];
          i2=i;
        }
      }
    }
    if(max_area==0)
    {

      cout<<3<<"\n"<<i0<<" "<<i1<<" "<<n-2<<"\n";

      for(int i=1;i<n+1;i++)
      {
          if(i!=n-2)
          cout<<a[i][0]<<" "<<a[i][1]<<"\n";
          else
          cout<<a[i][0]+1<<" "<<a[i][1]<<"\n";

      }
    }
    else
    {
      cout<<3<<"\n"<<i0<<" "<<i1<<" "<<i2<<"\n";

      for(int i=1;i<n+1;i++)
      {

          cout<<a[i][0]<<" "<<a[i][1]<<"\n";


      }
    }


  }
} 
