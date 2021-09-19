class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxindex=nums[0];
        int current_index=0;
        while(current_index<=maxindex)
        {
            if(current_index==nums.size()-1)
            {
                return true;
            }
            maxindex=max(maxindex,current_index+nums[current_index]);
            current_index++;
        }
        return false;
        
    }
};