class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
       int count[10005]={0};
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        int ans[10005][2];
        ans[0][0]=0;
        ans[0][1]=0;
        for(int i=1;i<10005;i++)
        {
            ans[i][0]=max(ans[i-1][0],ans[i-1][1]);
            ans[i][1]=i*count[i]+ans[i-1][0];
        }
        return ans[10004][0];
    }
};