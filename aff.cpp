#include<bits/stdc++.h>
using namespace std;
int main()
{

    while(1){
    cout<<"Enter selection \n1.Encryption \n2.Decryption \nExit\n";
    int t;
    cin>>t;
    if(t==1)
    {
        cout<<"Enter value of N ";
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter string to be Encrypted : ";
        string s;
        cin>>s;
        //cin.ignore();

    //    getline(cin,s);

        double c2=s.size()/(double)n;
        if(c2!=(int)c2)
            c2=(int)c2+1;
        //cout<<c2;
        int c1=c2;
        int b[n][(int)c1];
        int k1=0,k2=0;

        for(int i=0;i<n*c1;i++)
        {
            if(i<s.size())
            b[k1][k2]=s[i]-'a';
        else
            b[k1][k2]='x'-'a';
            k1++;
            if(k1==n)
            {
                k1=0;
                k2++;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<"\n";
        }
        int cm[n][c1];
        string s2=s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<c1;j++)
            {
                cm[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    cm[i][j]+=a[i][k]*b[k][j];
                }
                cm[i][j]=cm[i][j]%26;
                cout<<cm[i][j]<<" ";

            }
            cout<<"\n";
        }

        {
            for(int j=0;j<c1;j++)
            {
            for(int i=0;i<n;i++){
                char cm1=cm[i][j]+'a';
                if(i+j*n<s.size())
                s2[i+j*n]=cm1;
                //cout<<i+j*n<<" ";
            }}
        }
        cout<<"Encrypted text is";
        cout<<s2<<"\n";


    }
    else if(t==2)
    {

    }
    else{
        break;
    }
}
}
