class Solution {
public:
    vector<vector<int>> ans;
    void fn(int ind,vector<int>& candidates, int target,vector<int> &dp)
    {
        if(ind==candidates.size())
        {
            if(target==0)
            {
                ans.push_back(dp);
            }
            return;
        }
        else if(target==0)
        {
            ans.push_back(dp);
            return;
        }
        else if(target<0)
        {
            return;
        }
        else{
            int j=ind+1;
            while(j<candidates.size() && candidates[j]==candidates[ind]){
                j++;
            }
            fn(j,candidates,target,dp);
            if(target>=candidates[ind]){
                dp.push_back(candidates[ind]);
                fn(ind+1,candidates,target-candidates[ind],dp);
                dp.pop_back();
                return;
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> dp;
        sort(candidates.begin(),candidates.end());
        fn(0,candidates,target,dp);
        set<vector<int>> s(ans.begin(),ans.end());
        cout<<s.size();
        vector<vector<int>> ans_f;
        for(auto it=s.begin();it!=s.end();it++)
        {
            vector<int> v;
            v=*it;
            
            ans_f.push_back(v);
        }
        //ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};