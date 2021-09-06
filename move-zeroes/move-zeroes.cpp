class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero=0;
        int zero=0,n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                zero++;
            }
            else{
                nums[nonzero]=nums[i];
                nonzero++;
            }
        }
        for(int i=0;i<zero;i++)
        {
            nums[n-i-1]=0;
        }
        return;
    }
};