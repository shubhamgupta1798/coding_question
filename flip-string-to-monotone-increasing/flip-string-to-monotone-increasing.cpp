class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int ans=INT_MAX;
        
        int a[s.size()+1];
        int b[s.size()+1];
        a[s.size()]=0;
        b[0]=0;
        for(int i=s.size()-1;i>=0;i--)
        {
           if(s[i]=='1')
           {
               a[i]=a[i+1];
           }
        else{
                a[i]=a[i+1]+1;
            }
            
        }
        for(int i=0;i<s.size();i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                b[i+1]=b[i];
            }
            else{
                b[i+1]=b[i]+1;
            }
            
        }
        for(int i=0;i<s.size()-1;i++)
        {
            ans=min(ans,a[i+1]+b[i+1]);
        }
        ans=min(min(ans,b[s.size()]),a[0]);
        return ans;
    }
};