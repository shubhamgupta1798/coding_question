#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[2001][2001];
int row,column;
int e[1000001]={0};
int getregionsize(int r1,int c1)
{
  if(r1<0 || c1< 0 || r1 >=row || c1>=column)
  {
    return 0;
  }
  if(a[r1][c1]==0)
  {
    return 0;
  }
  int size=1;
  a[r1][c1]=0;
  size+=getregionsize(r1,c1-1)+getregionsize(r1,c1+1)+getregionsize(r1-1,c1)+getregionsize(r1+1,c1);
  return size;
}
int findmaxconn()
{
  int maxregion=0;
  for(int r1=0;r1<row;r1++)
  {
    for(int c1=0;c1<column;c1++)
    {
      if(a[r1][c1]==1)
      {
        int size=getregionsize(r1,c1);
        maxregion=max(size,maxregion);

      }
    }
  }
}
int main()
{

  cin>>row>>column;
  int c1;
  int b[row][column];
  int m1=0;
  for(int i=0;i<row;i++)
  {
    for(j=0;j<column;j++)
    {
      cin>>b[i][j];
      e[b[i][j]]++;
      if(b[i][j]>m1)
      m1=b[i][j];
    }
  }
  int max1=0;
  for(int i=1;i<m1+1;i++)
  {
    for(j=i;j<m1+1;j++)
    {
      if(e[i]!=0 && e[j]!=0 && (e[i]+e[j])>max)
      for(int i1=0;i1<row;i1++)
      {
        for(int j1=0;j1<column;j1++)
        {
          if(b[i1][j1]==i || b[i1][j1]==j)
          a[i1][j1]=1;
          else{
            a[i1][j1]=0;
          }
        }
      }
      int e1=findmaxconn();
      max1=max(e1,max1);
    }
  }
  cout<<max1;




}
