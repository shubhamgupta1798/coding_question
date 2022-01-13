class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)
        {
            return 0;
        }
        int dp[coins.size()][amount+1];
        for(int i=0;i<coins.size();i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(i==0 && j<coins[i])
                {
                    dp[i][j]=INT_MAX;
                }
                else if(j==coins[i])
                {
                    dp[i][j]=1;
                }
                else if(i==0)
                {
                    dp[i][j]=((dp[i][j-coins[i]]!=INT_MAX)?dp[i][j-coins[i]]+1:INT_MAX);
                }
                else{
                    //cout<<((j<coins[i])?(dp[i-1][j]):(min(dp[i][j-coins[i]]+1,dp[i-1][j])));
                    dp[i][j]=((j<coins[i])?(dp[i-1][j]):(min(((dp[i][j-coins[i]]!=INT_MAX)?dp[i][j-coins[i]]+1:INT_MAX),dp[i-1][j])));
                }
               // cout<<dp[i][j]<<" ";
            }
            //cout<<"\n";
        }
        return ((dp[coins.size()-1][amount]==INT_MAX)?-1:dp[coins.size()-1][amount]);
    }
};