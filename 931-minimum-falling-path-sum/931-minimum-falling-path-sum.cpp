class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int ans=INT_MAX;
        int n=matrix.size();
        if(n==1){
           // cout<<"here"<<m;
        for(int i=0;i<m;i++)
         {
             ans=min(ans,matrix[0][i]);
         }
            return ans;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                matrix[i][j]=min({(j>0)?(matrix[i][j]+matrix[i-1][j-1]):INT_MAX,(matrix[i][j]+matrix[i-1][j]),(j<m-1)?(matrix[i][j]+matrix[i-1][j+1]):INT_MAX});
                //cout<<matrix[i][j]<<" ";
                if(i==n-1)
                {
                    ans=min(ans,matrix[i][j]);
                }
            }
           // cout<<"\n";
        }
        return ans;
        
    }
};