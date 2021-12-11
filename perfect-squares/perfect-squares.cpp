class Solution {
public:
    int numSquares(int n) {
        int temp=sqrt(n)+1;
        int dp[temp+1][n+2];
        for(int i=1;i<temp;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                if(i==1)
                {
                    dp[i][j]=j;
                }
                else{
                    if(j==i*i)
                    {
                        dp[i][j]=1;
                    }
                    else if(j>i*i)
                        dp[i][j]=min(dp[i][j-i*i]+1,dp[i-1][j]);
                    else{
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
        }
        // for(int i=1;i<temp;i++)
        // {
        //     for(int j=1;j<n+1;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        return dp[temp-1][n];
    }
};