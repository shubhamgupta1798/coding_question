class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> c;
        int i=0;
        int j1=0;
        int j2=0;
    
        while(i!=m+n)
        {
            i++;
            if(j1==m)
            {
                c.push_back(nums2[j2]);
                j2++;
            }
            else if(j2==n)
            {
                c.push_back(nums1[j1]);
                j1++;
            }
            else if(nums1[j1]<nums2[j2] && j1<m)
            {
                c.push_back(nums1[j1]);
                j1++;
            }
            else{
                c.push_back(nums2[j2]);
                j2++;
            }
        }
        nums1=c;
        return ;
    }
};