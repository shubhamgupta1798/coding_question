class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> s;
        s=strs;
        
        
        set<string> m;
        for(int i=0;i<s.size();i++)
        {
            sort(s[i].begin(),s[i].end());
           // cout<<s[i]<<"\n";
            m.insert(s[i]);
        }
        
        
        vector<vector<string>> s1;
        int count=0;
        for(auto i=m.begin();i!=m.end();i++)
        {
            cout<<*i<<"\n";
            vector<string> m0;
            s1.push_back(m0);
            for(int i1=0;i1<strs.size();i1++)
            {
                if(*i==s[i1])
                {
                    s1[count].push_back(strs[i1]);
                    
                }
            }
            count++;
            
        }
        return s1;
    }
};