class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row;
        vector<int> col;
        int n1=matrix.size();
        int n2=matrix[0].size();
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i=0;i<row.size();i++)
        {
            for(int j=0;j<n2;j++)
            {
                matrix[row[i]][j]=0;
            }
        }
        
        for(int i=0;i<col.size();i++)
        {
            for(int j=0;j<n1;j++)
            {
                matrix[j][col[i]]=0;
            }
        }
        
    }
};