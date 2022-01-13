class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int dp[coins.size()][amount+1];
        for(int i=0;i<coins.size();i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(j==0)
                {
                    dp[i][j]=1;
                }
                else if(i==0 && j<coins[i])
                {
                    dp[i][j]=0;
                }
                else if(i==0)
                {
                    if(j%coins[i]==0)
                    {
                        dp[i][j]=1;
                    }
                    else{
                        dp[i][j]=0;
                    }
                }
                else{
                    dp[i][j]=((j<coins[i])?dp[i-1][j]:(dp[i-1][j]+dp[i][j-coins[i]]));
                }
                //cout<<dp[i][j]<<" ";
            }
            //cout<<"\n";
        }
        return dp[coins.size()-1][amount];
    }
};