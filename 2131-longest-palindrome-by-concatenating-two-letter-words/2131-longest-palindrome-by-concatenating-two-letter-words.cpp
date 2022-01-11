class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int complete=0;
        int ans=0;
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();i++)
        {
            if(words[i][0]==words[i][1])
            {
                complete++;
            }
            string temp="";
            temp+=words[i][1];
            temp+=words[i][0];
            if(mp[temp]>=1)
            {
                if(words[i][0]==words[i][1])
                {
                    complete-=2;
                }
                mp[temp]--;
                ans+=2;
            }
            else{
                mp[words[i]]++;
            }
        }
        //cout<<complete;
        if(complete!=0)
        {
            ans++;
        }
        return ans*2;
    }
};