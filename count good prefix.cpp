#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string s;
    cin>>s;
    int n,ans=0,ans1;
    cin>>n;
    int diff;
    int a=0,b=0,c,e=0;

      for(int j=0;j<s.size();j++)
      {
        if(s[j]=='a')
        a++;
        else
        b++;
        if(a>b)
        ans++;
      }
      diff=a-b;
      c=b;
      cout<<ans;
      if(diff<=0)
      {
        cout<<ans*n;
      }
      else
      {
        int i;
        for(i=1;i<n;i++)
        {
          if(c>=diff)
          {
            for(int j=0;j<s.size();j++)
            {
              if(s[j]=='a')
              a++;
              else
              b++;
              if(a>b)
              ans++;
            }
            diff=a-b;
            cout<<diff;
          }
          else
          {
            cout<<ans;
            ans=ans+s.size()*(n-i);
            cout<<ans<<"\n";
            e++;
            break;
          }

        }
        if(e==0)
        {
          cout<<ans<<"\n";
        }

      }



    }

}
