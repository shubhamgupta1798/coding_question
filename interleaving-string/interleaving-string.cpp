class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if((s1.size()+s2.size())!=s3.size())    
            return false;
        int n=s1.size();
        int m=s2.size();
        bool dp[n+1][m+1];
        dp[0][0]=true;
        for(int i=1;i<n+1;i++)
        {
            if(s1[i-1]==s3[i-1])
            {
                dp[i][0]=dp[i-1][0];
            }
            else{
                dp[i][0]=false;
            }
        }
        
        for(int i=1;i<m+1;i++)
        {
            if(s2[i-1]==s3[i-1])
            {
                dp[0][i]=dp[0][i-1];
            }
            else{
                dp[0][i]=false;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                dp[i][j]=(dp[i][j-1]&(s2[j-1]==s3[i+j-1]))|(dp[i-1][j] &(s1[i-1]==s3[i+j-1]));
            }
        }
        return dp[n][m];                  
    }
};