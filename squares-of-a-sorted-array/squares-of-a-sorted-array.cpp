class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int index=0;
        int minelement=abs(nums[0]);
        for(int i=0;i<nums.size();i++)
        {
            if(abs(nums[i])<minelement)
            {
                minelement=abs(nums[i]);
                index=i;
            }
            nums[i]=nums[i]*nums[i];
        }
        vector<int> ans;
        ans.push_back(nums[index]);
        int left=index-1;
        int right=index+1;
        while(left!=-1 || right!=nums.size())
        {
            if(left==-1)
            {
                ans.push_back(nums[right]);
                right++;
            }
            else if(right==nums.size())
            {
                ans.push_back(nums[left]);
                left--;
            }
            else if(nums[left]>nums[right])
            {
                ans.push_back(nums[right]);
                right++;
            }
            else{
                ans.push_back(nums[left]);
                left--;
            }
        }
        return ans;
        
    }
};