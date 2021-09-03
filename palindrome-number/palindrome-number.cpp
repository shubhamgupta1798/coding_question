class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x>=0)
        {
           string s=std::to_string(x);
            string s2=s;
           reverse(s.begin(),s.end());
            if(s==s2)
                return true;
           return false; 
        }
        else
        {
            return false;
        }
    }
};