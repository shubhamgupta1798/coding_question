#include<iostream>
#include<math.h>
using namespace std;


int main()
{
  int n,k;
  cin>>n>>k;
  int x,y;
  cin>>x>>y;
  int ck=0;
  double a[n+1][2];
  double b[n+1];
  int c[n+1];
  for(int i=0;i<n;i++)
  {
    cin>>c[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>a[i][0]>>a[i][1];
    b[i]=sqrt((a[i][0]-x)*(a[i][0]-x)+(a[i][1]-y)*(a[i][1]-y))-(double)k;
    //cout<<b[i];
    if(b[i]<=0)
    ck++;


  }
  if(ck!=0)
  cout<<"0";

  else
  {
      double min=0,temp;
    double x1,y1;
    for(int i=0;i<n;i++)
    {
      x1=((b[i])*x+k*a[i][0])/(b[i]+k);
      y1=((b[i])*y+k*a[i][1])/(b[i]+k);
      //cout<<x1<<y1;
      if((int)x1==x1 && (int)y1==y1)
      {
        if(ck==0)
        {
          ck++;

          min=((b[i])/(double)c[i]);
        }
        else
        {
          temp=((b[i])/(double)c[i]);
          if(temp<min)
          min=temp;
        }

      }
      else
      {
        while(!((int)x1==x1 && (int)y1==y1))
        {
          x1=int(x1)+1;
          double z;
          y1=y+((double)(y-a[i][1])*(double)(x1-x))/(double)(x-a[i][0]);
          if((int)y1==y1)
          {
            if(ck==0)
            {
                //cout<<x1<<y1;
                //cout<<"11111";
              ck++;
              z=sqrt((a[i][0]-x1)*(a[i][0]-x1)+(a[i][1]-y1)*(a[i][1]-y1));
              min=((z)/c[i]);
            }
            else
            {
                 z=sqrt((a[i][0]-x1)*(a[i][0]-x1)+(a[i][1]-y1)*(a[i][1]-y1));

              temp=((z)/(double)c[i]);
              if(temp<min)
              min=temp;
            }
          }
          if(x1==x)
          break;
        }
      }


    }

    cout<<int(ceil(min));
  }


}
