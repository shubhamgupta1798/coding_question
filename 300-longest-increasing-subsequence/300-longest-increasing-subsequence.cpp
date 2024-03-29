class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
      int dp[2501]={0};
        for(int i=0;i<nums.size();i++)
            dp[i]=1;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        ans=max(ans,dp[i]);  
        return ans;
    }
};