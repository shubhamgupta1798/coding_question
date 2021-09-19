class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        long long int closest=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int l1=0;l1<nums.size()-2;l1++)
        {
            int l=l1+1;
            int r=nums.size()-1;
            while(l<r)
            {
                int current=abs(nums[l1]+nums[l]+nums[r]-target);
                if(abs(closest-target)>current){
                    closest=nums[l1]+nums[l]+nums[r];
                }
                if(nums[l1]+nums[l]+nums[r]-target>0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return closest;
    }
};