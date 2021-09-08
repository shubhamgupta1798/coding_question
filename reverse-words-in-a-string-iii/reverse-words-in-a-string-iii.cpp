class Solution {
public:
    string reverseWords(string s) {
        bool word=false;
        int start=0;
        string ans="";
        string temp="";
            
        for(int i=0;i<s.size();i++)
        {
            
            
            if(s[i]==' ')
            {
               if(word)
               {
                   reverse(temp.begin(),temp.end());
                   ans=ans+temp;
                   temp="";
               }
                ans=ans+' ';
                word=false;
            }
            else{
                temp=temp+s[i];
                word=true;
            }
        }
        if(temp!="")
        {
            reverse(temp.begin(),temp.end());
            ans=ans+temp;
        }
        return ans;
    }
};