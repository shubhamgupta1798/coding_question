class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a[205];
        for(int i=0;i<205;i++)
        {
            a[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            a[nums[i]+100]++;
        }
        int j=0;
        for(int i=0;i<205;i++)
        {
            if(a[i]!=0)
            {
                nums[j]=i-100;
                j++;
            }
        }
        return j;
    }
};