class Solution {
public:
    int temp(vector<int>& nums){
        int dp[nums.size()][2];
        dp[0][0]=0;
        dp[0][1]=nums[0];
        
        for(int i=1;i<nums.size();i++)
        {
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]);
            dp[i][1]=dp[i-1][0]+nums[i];
        }
        return max(dp[nums.size()-1][0],dp[nums.size()-1][1]);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        vector<int> v={nums.begin(),nums.end()-1};
        int a=temp(v);
        vector<int> v1={nums.begin()+1,nums.end()};
        int b=temp(v1);
        return max(a,b);
       
    }
};