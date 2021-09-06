class Solution {
public:
    
    int searchInsert(vector<int>& nums, int target) {
        int floor = -1;
        int left = 0, right = nums.size()-1;
        while(left<=right){
            
            int mid = (right-left)/2+left;
            
            if(nums[mid] == target){
                return mid;
            }
            
            else if(nums[mid]<target){
                 floor = mid;
                 left = mid+1;
            }  
            else{
                right = mid-1;
            }
        }
        return floor+1;
    }
};