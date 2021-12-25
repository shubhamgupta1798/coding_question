class Solution {
public:
    int countSubstrings(string s) {
       int dp[s.size()+2][s.size()+2];
        memset(dp,0,sizeof(dp));
        long count=0;
        for(int i=0;i<s.size();i++)
        {
            dp[i][i]=1;
            count++;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                count++;
            }
        }
        for(int i=2;i<s.size();i++)
        {
            for(int j=0;j+i<s.size();j++)
            {
                if(s[j]==s[i+j] && dp[j+1][i+j-1]==1)
                {
                    dp[j][i+j]=1;
                    count++;
                }
                else{
                   // cout<<dp[j+1][i+j-1];
                    //cout<<"here";
                }
            }
        }
        // for(int i=0;i<s.size();i++)
        // {
        //     for(int j=0;j<s.size();j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        return count;
    }
};