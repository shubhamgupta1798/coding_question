#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    long long int sum1=0,sum2=0;
    while(t--)
    {
    int n,k,c1=0,c2=0;
    cin>>n>>k;
    int a[n],b[n/2+1],c[n/2];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if((i%2)==0)
        {
            b[c1]=a[i];
            c1++;
            sum1+=a[i];

        }
        else
        {
            c[c2]=a[i];
            c2++;
            sum2+=a[i];

        }
    }
    if(sum2>sum1)
    cout<<"YES\n";
    else{


    sort(b,b+c1);
    int e=0;
    sort(c,c+c2);

    for(int i=0;i<c1;i++)
    cout<<b[i];

    for(int i=0;i<c2;i++)
    cout<<c[i];
    for(int i=0;i<k;i++)
    {cout<<sum1<<sum2<<"\n";
      if(b[c1-i-1]>c[i])
      {
        int q;
        q=b[c1-i-1];
        b[c1-i-1]=c[i];
        c[i]=q;
        sum1=sum1-b[c1-i-1]+c[i];
        sum2=sum2-c[i]+b[c1-i-1];
        if(sum2>sum1)
        {
        e++;
        cout<<"YES\n";
        break;
        }
      }
      else
      break;
    }
    cout<<sum1<<sum2<<"\n";
    if(e==0)
    {
      cout<<"NO\n";
    }
  }

    }
}
