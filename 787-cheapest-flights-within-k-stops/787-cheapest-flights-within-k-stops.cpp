class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
       vector<vector<int>> dp(k+5, vector<int>(n, INT_MAX));
        for(int i=0;i<=k+1;i++)
        {
            dp[i][src] = 0; 
        }
        for(int i=1;i<=k+1;i++)
        {
            for(int j=0;j<flights.size();j++)
            {
                if(dp[i-1][flights[j][0]] != INT_MAX)
                    dp[i][flights[j][1]] = min(dp[i][flights[j][1]], dp[i-1][flights[j][0]] + flights[j][2]);
            }
        }
        return (dp[k+1][dst]==INT_MAX)?-1:dp[k+1][dst];
    }
};