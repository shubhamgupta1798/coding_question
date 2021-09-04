class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry=0;
        
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(i==digits.size()-1)
            {
                int a=digits[i]+1;
                ans.push_back(a%10);
                carry=a/10;
            }       
            else{
                int a=digits[i]+carry;
                ans.push_back(a%10);
                carry=a/10;
            }
        }
        if(carry==1)
        {
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};