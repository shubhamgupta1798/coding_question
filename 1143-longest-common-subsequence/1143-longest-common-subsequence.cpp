class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[text1.size()+2][text2.size()+2];
        memset( dp, 0, sizeof(dp) );
        if(text1.size()==0 || text2.size()==0)
        {
            return 0;
        }
        for(int i=0;i<text2.size();i++)
        {
            if(text1[0]==text2[i])
            {
                dp[1][i+1]=1;
            }
            else{
                dp[1][i+1]=dp[1][i];
            }
        }
        for(int i=0;i<text1.size();i++)
        {
            if(text2[0]==text1[i])
            {
                dp[i+1][1]=1;
            }
            else{
                dp[i+1][1]=dp[i][1];
            }
        }
        for(int i=1;i<text1.size()+1;i++)
        {
            for(int j=1;j<text2.size()+1;j++)
            {
                if(text1[i]==text2[j])
                {
                    dp[i+1][j+1]=dp[i][j]+1;
                }
                else{
                    dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
                }
            }
            //cout<<"\n";
        }
        // for(int i=0;i<text1.size()+1;i++)
        // {
        //     for(int j=0;j<text2.size()+1;j++)
        //     {
        //         cout<<dp[i][j];
        //     }
        //     cout<<"\n";
        // }
        return dp[text1.size()][text2.size()];
        
    }
};