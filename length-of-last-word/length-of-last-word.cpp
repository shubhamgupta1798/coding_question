class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        bool initial=true;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ' && initial)
            {
                continue;
            }
            else if(s[i]==' ')
            {
                break;
            }
            else{
                initial=false;
                ans++;
            }
        }
        return ans;
    }
};