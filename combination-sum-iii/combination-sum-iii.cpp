class Solution {
public:
    void find(vector<vector<int>> & ans,vector<int> v, int k, int n)
    {
        if(n==0)
        {
            if(k==0)
                ans.push_back(v);
            return;
        }
        if(n<0)
        {
            return;
        }
        
        else{
            int start=1;
            if(v.size()>0)
            {
                start=v[v.size()-1]+1;
            }
            for(int i=start;i<=9;i++)
            {
                vector<int> temp;
                temp=v;
                temp.push_back(i);
                find(ans,temp,k-1,n-i);
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> v;
        find(ans,v,k,n);
        return ans;
    }
};