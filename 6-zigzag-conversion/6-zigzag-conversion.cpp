class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> v(numRows,"");
        if(numRows==1)
        {
            return s;
        }
        int dir=0;
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            v[j]+=s[i];
            if(dir==0)
            {
                j++;
                if(j==numRows)
                {
                    j-=2;
                    dir=-1;
                }
            }
            else{
                j--;
                if(j==-1)
                {
                    j+=2;
                    dir=0;
                }
            }
        }
        string ans="";
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i];
        }
        return ans;
    }
};