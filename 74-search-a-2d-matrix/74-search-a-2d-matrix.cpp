class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left=0;
        int right=matrix.size()*matrix[0].size()-1;
        int n=matrix.size();
        int m=matrix[0].size();
        
        while(left<=right)
        {
            
            int mid=(left+right)/2;
            //cout<<mid<<" ";
            //cout<<matrix[mid%n][mid/n]<<" ";
            if(matrix[mid/m][mid%m]==target)
            {
                return true;
            }
            else if(matrix[mid/m][mid%m]>target)
            {
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return false;
    }
};