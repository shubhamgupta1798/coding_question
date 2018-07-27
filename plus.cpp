#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int row=0;row<n;row++)
    {
        for(int column=0;column<m;column++)
        {
            cin>>a[row][column];
        }
    }

    for(int row=0;row<n;row++)
    {
        for(int column=0;column<m;column++)
        {
            cin>>a[row][column];
        }
    }
    long long int max=a[0][1]+a[1][0]+a[1][1]+a[1][2]+a[2][1];
    long long int ans;
    for(int row=0;row<n-2;row++)
    {
        for(int column=0;column<m-2;column++)
        {
            ans=a[row][1+column]+a[1+row][column]+a[1+row][1+column]+a[1+row][2+column]+a[2+row][1+column];

            if(ans>max)
            max=ans;
        }
    }
    cout<<max<<"\n";
}}
