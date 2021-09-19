class Solution {
public:
    int jump(vector<int>& nums) {
        int ans[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=INT_MAX-10000;
        }
        ans[nums.size()-1]=0;
        for(int i=nums.size()-2;i>=0;i--)
        {
            int m0=nums[i]+i+1;
            if(nums[i]+i+1>nums.size())
                m0=nums.size();
            
            for(int j=i+1;j<m0;j++){
                ans[i]=min(ans[i],ans[j]+1);
            }
        }
        return ans[0];
    }
};