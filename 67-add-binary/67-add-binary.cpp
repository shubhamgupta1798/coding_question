class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int length=max(a.size(),b.size());
        int m1=0;
        int carry=0;
        string temp=a;
        if(b.size()>a.size()){
            a=b;
            b=temp;
        }
        for(int i=0;i<b.size();i++)
        {
            int m=(a[a.size()-1-i]+b[b.size()-1-i]-'0'-'0')+carry;
            char c='0'+m%2;
            carry=m/2;
            ans=ans+c;
                
        }
        for(int i=b.size();i<a.size();i++)
        {
            int m=(a[a.size()-1-i]-'0')+carry;
            char c='0'+m%2;
            carry=m/2;
            ans=ans+c;
        }
        if(carry==1)
        {
            char c='0'+carry%2;
            ans=ans+c;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};