class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        int count[n+10];
        memset(count,0,sizeof(count));
        for(int i=0;i<trust.size();i++)
        {
            count[trust[i][0]]--;
            count[trust[i][1]]++;
        }
        for(int i=1;i<n+1;i++)
        {
            //cout<<count[i];
            if(count[i]==n-1)
            {
                return i;
            }
        }
        return -1;
            
        
    }
};