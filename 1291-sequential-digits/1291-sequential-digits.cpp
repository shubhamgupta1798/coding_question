class Solution {
public:
    vector<int> all;
    void dfs(int last,int curr)
    {
        if(curr>INT_MAX/10 || last==9)
        {
            all.push_back(curr);
            return;
        }
        
        else{
            all.push_back(curr);
            curr=curr*10+(last+1);
            dfs(last+1,curr);
        }
    }
    vector<int> sequentialDigits(int low, int high) {
        //int low_p=places(low);
        //int hight_p=places(high);
        
        for(int i=1;i<=9;i++)
        {
             dfs(i,i);   
        }
        vector<int> ans;
        for(int i=0;i<all.size();i++)
        {
            if(all[i]>=low &&all[i]<=high)
            {
                ans.push_back(all[i]);
                    
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};