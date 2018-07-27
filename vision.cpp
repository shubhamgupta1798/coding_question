#include<iostream>
#include<bits/stdc++.h>
#include<float.h>
using namespace std;
long double calc_b(long double x1,long double y1,long double z1 ,long double x2, long double y2, long double z2 )
{
long double  b=2*((x2-x1)*x1+(y2-y1)*y1+(z2-z1)*z1);
  return b;
}
long double calc_a(long double x1,long double y1,long double z1 ,long double x2, long double y2, long double z2 ){
  long double a=(x2-x1)*(x2-x1) +(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1);
  return a;
}
long double calc_c(long double x1,long double y1,long double z1 ,long double r)
{
  long double c=x1*x1+y1*y1+z1*z1-r*r;
  return c;
}
int return_val(long double x1,long double y1,long double z1,long double x2 ,long double y2, long double z2, long double r)
{
  long double a,b,c;

  a=calc_a(x1,y1,z1,x2,y2,z2);
  b=calc_b(x1,y1,z1,x2,y2,z2);
  c=calc_c(x1,y1,z1,r);
  //cout<<b*b-4*a*c<<"\n";
  //cout<<"x1 "<<y2<<" b2-4ac="<<b*b<<" "<<4*a*c<<"\n";
  if(b*b-4*a*c<=0)
  return 1;
  else
  return 0;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      long double p1,p2,p3,q1,q2,q3,c1,c2,c3,r,dx,dy,dz;
      cin>>p1>>p2>>p3>>q1>>q2>>q3>>dx>>dy>>dz>>c1>>c2>>c3>>r;
      long double shifted_p1=p1-c1,shifted_p2=p2-c2,shifted_p3=p3-c3,shifted_q1=q1-c1,shifted_q2=q2-c2,shifted_q3=q3-c3,shifted_c1=0,shifted_c2=0,shifted_c3=0;
      long double a,b,c;
      long double temp1=shifted_q1,temp2=shifted_q2,temp3=shifted_q3;

      a=calc_a(shifted_p1,shifted_p2,shifted_p3,shifted_q1,shifted_q2,shifted_q3);
      b=calc_b(shifted_p1,shifted_p2,shifted_p3,shifted_q1,shifted_q2,shifted_q3);
      c=calc_c(shifted_p1,shifted_p2,shifted_p3,r);
      if(b*b-4*a*c<0)
      cout<<"0\n";
      else{
        long double l=0;
        long double r1=1000000000.0;
        //long double a2=md(shifted_q1,shifted_q2,shifted_q3);
        //r=r/a2;
        int flag=0;
       // int it=0;
        while(!flag)
        {
           // it++;
          // cout<<" l " <<l<<" r "<<r<<" ";
          shifted_q1=temp1;
          shifted_q2=temp2;
          shifted_q3=temp3;
          shifted_q1+=dx*l;
          shifted_q2+=dy*l;
          shifted_q3+=dz*l;
          if(r1-l<=0.000000001)
          {
               shifted_q1=temp1;
          shifted_q2=temp2;
          shifted_q3=temp3;
          shifted_q1+=dx*r1;
          shifted_q2+=dy*r1;
          shifted_q3+=dz*r1;
         ///cout<<it;
          //cout<<r;
          if(return_val(shifted_p1,shifted_p2,shifted_p3,shifted_q1,shifted_q2,shifted_q3,r))
          cout<<l<<"\n";
          flag++;

          }
          if(return_val(shifted_p1,shifted_p2,shifted_p3,shifted_q1,shifted_q2,shifted_q3,r) && flag==0)
          {
            flag++;
            cout<<l<<"\n";
            break;
          }



          long double mid=(l+r1)/2;
          shifted_q1=temp1;
          shifted_q2=temp2;
          shifted_q3=temp3;
          shifted_q1+=dx*mid;
          shifted_q2+=dy*mid;
          shifted_q3+=dz*mid;


          if(return_val(shifted_p1,shifted_p2,shifted_p3,shifted_q1,shifted_q2,shifted_q3,r))
          {
             r1=mid;
          }
          else{
            l=mid;

          }





        }



      }
    }
}
