class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int dp[matrix.size()+1][matrix[0].size()+1];
        int max_t=0;
        for(int i=0;i<matrix.size();i++)
        {
            dp[i][0]=matrix[i][0]-'0';
            max_t=max(max_t,dp[i][0]);
        }
        for(int i=0;i<matrix[0].size();i++)
            
        {
            dp[0][i]=matrix[0][i]-'0';
             max_t=max(max_t,dp[0][i]);
        }
        
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
            
                if(matrix[i][j]=='1')
                    dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
                else
                    dp[i][j]=0;
               // cout<<dp[i][j]<<" ";
                 max_t=max(dp[i][j],max_t);
            }
            //cout<<"\n";
        }
        // for(int i=0;i<matrix.size();i++)
        // {
        //     for(int j=0;j<matrix[i].size();j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        return max_t*max_t;
        
    }
};