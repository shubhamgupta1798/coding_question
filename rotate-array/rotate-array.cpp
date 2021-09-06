class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v;
        
        int n=nums.size();
        k=k%n;
        for(int i=0;i<n;i++)
        {
            v.push_back(nums[(i+n-k)%n]);
        }
        nums=v;
        return ;
    }
};