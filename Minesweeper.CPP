#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char a[100][100];
int check(int i,int j,int n,int m)
{
  int c=0;
  if(i==0)
  {
    if(j==0)
    {
      if(a[i+1][j]=='*')
      c++;
      if(a[i][j+1]=='*')
      c++;

      if(a[i+1][j+1]=='*')
      c++;

    }
    else if(j==m-1)
    {
        if(a[i+1][j]=='*')
      c++;
      if(a[i][j-1]=='*')
      c++;

      if(a[i+1][j-1]=='*')
      c++;
    }
    else
    {
      if(a[i+1][j]=='*')
      c++;
      if(a[i][j+1]=='*')
      c++;

      if(a[i+1][j+1]=='*')
      c++;
      if(a[i][j-1]=='*')
      c++;

      if(a[i+1][j-1]=='*')
      c++;
    }
  }
  else if(i==n-1)
  {
      if(j==0)
    {
      if(a[i-1][j]=='*')
      c++;
      if(a[i][j+1]=='*')
      c++;

      if(a[i-1][j+1]=='*')
      c++;

    }
    else if(j==m-1)
    {
        if(a[i-1][j]=='*')
      c++;
      if(a[i][j-1]=='*')
      c++;

      if(a[i-1][j-1]=='*')
      c++;
    }
    else
    {
      if(a[i-1][j]=='*')
      c++;
      if(a[i][j+1]=='*')
      c++;

      if(a[i-1][j+1]=='*')
      c++;
      if(a[i][j-1]=='*')
      c++;

      if(a[i-1][j-1]=='*')
      c++;
    }
  }
  else
  {
    if(j==0)
    {
      if(a[i+1][j]=='*')
      c++;
      if(a[i][j+1]=='*')
      c++;

      if(a[i+1][j+1]=='*')
      c++;
      if(a[i-1][j]=='*')
      c++;
      if(a[i-1][j+1]=='*')
      c++;
    }
    else if(j==m-1)
    {
        if(a[i+1][j]=='*')
      c++;
      if(a[i][j-1]=='*')
      c++;

      if(a[i+1][j-1]=='*')
      c++;
      if(a[i-1][j]=='*')
      c++;
      if(a[i-1][j-1]=='*')
      c++;
    }
    else
    {
      if(a[i+1][j]=='*')
      c++;
      if(a[i][j+1]=='*')
      c++;

      if(a[i+1][j+1]=='*')
      c++;
      if(a[i-1][j]=='*')
      c++;
      if(a[i-1][j+1]=='*')
      c++;
      if(a[i][j-1]=='*')
      c++;

      if(a[i+1][j-1]=='*')
      c++;
      if(a[i-1][j-1]=='*')
      c++;

    }
  }
  return c;
}
int main()
{
  int n,m,c=0,k;
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      cin>>a[i][j];
    }
  }

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(a[i][j]=='*')
      continue;
      if(a[i][j]=='.')
      {
        k=check(i,j,n,m);

        // cout<<k;
        if(i==0 || i==n-1)
        {
          if(j==0 || j==m-1)
          if(k==3)
          {continue;}
          else{
          c++;
          break;}
          else
          {
            if(k==5)
            continue;
            else
            {
              c++;
              break;
            }
          }}
          else
          {
            if(j==0 || j==m-1)
            {
              if(k==5)
              continue;
              else
              {
                c++;
                break;
              }

            }
            else
            {
              if(k==8)
              continue;
              else
              {
                c++;
                break;
              }
            }
          }




      }
      else
      {
      k=check(i,j,n,m);
      //cout<<k;
      if(k+48==a[i][j])
      continue;
      else
      {
        c++;
        break;
      }
      }
    }
    if(c!=0)
    {
      break;
    }
  }
  if(c==0)
  cout<<"YES";
  else
  cout<<"NO";
}
