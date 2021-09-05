class Solution {
public:
    int sea(vector<int>& nums, int target,int left,int right)
    {
        int mid=(left+right)/2;
        if(left>right)
        {
            return -1;
        }
        if(nums[mid]==target)
        {
            return mid;
        }
        else if(nums[mid]>target)
        {
            right=mid-1;
            return sea(nums,target,left,right);
        }
        else{
            left=mid+1;
            return sea(nums,target,left,right);
        }
    }
    int search(vector<int>& nums, int target) {
        return sea(nums,target,0,nums.size());
        
    }
};