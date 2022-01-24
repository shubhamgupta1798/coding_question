class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int prev,int n,vector<int> v, int k)
    {
        if(v.size()==k)
        {
            ans.push_back(v);
        }
        else if(prev==n)
        {
            return;
        }
        else 
        {
            for(int i=prev+1;i<=n;i++)
            {
                vector<int> v2;
                v2=v;
                v2.push_back(i);
                dfs(i,n,v2,k);
            }
            return;
        }
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<int> v;
        for(int i=1;i<=n;i++)
        {
             vector<int> v;
            v.push_back(i);
            dfs(i,n,v,k);
        }
        return ans;
    }
};