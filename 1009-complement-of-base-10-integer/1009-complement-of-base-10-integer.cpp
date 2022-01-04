class Solution {
public:
    int bitwiseComplement(int n) {
        string s="";
        if(n==0)
        {
            return 1;
        }
        long long int ans=0;
        while(n>0)
        {
            int temp=n%2;
            if(temp==0)
            {
                s+='1';
            }
            else{
                s+='0';
            }
            n=n/2;
        }
        long long int temp=1;
        for(int i=0;i<s.size();i++)
        {
            ans=(s[i]-'0')*temp+ans;
            temp=temp*2;
        }
        return ans;
    }
};