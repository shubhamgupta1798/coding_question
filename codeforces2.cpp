#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  long long int k;
  k=(n-2)*3;
  if(m<=k)
  {
    cout<<"YES\n";
    if(n==2)
    {
      cout<<"../n..";
    }
    else{int l=m/(n-2);



    for(int i=0;i<4;i++)
    {
      if(l>0){
        l--;
      cout<<".";
      for(int j=0;j<n-2;j++)
      {
        cout<<"#";
      }
      cout<<".";
      m=m-n-2;
    }
    else
    {
        if(m>0)
        {
           cout<<".";
          // int i=0;
           for(int i=0;i<m;i++)
           cout<<"#";
           for(int i=m;i<n;i++)
           cout<<".";
        }
        else
      {for(int j=0;j<n;j++)
      cout<<".";
      }
      m=0;
    }
    cout<<"\n";

  }
  }
  }
  else
  cout<<"NO";

}
