class Solution {
public:
    int reverse(int x) {
        bool sign;
        int a1=INT_MAX;
        a1/=10;
        
        if(x>=0)
        {
            sign=true;
        }
        else{
            sign=false;
            
        }
        x=abs(x);
        int ans=0;
        while(x>0)
        {
            if(ans>a1)
                return 0;
            ans=ans*10;
            
            ans+=x%10;
            x=x/10;
        }
        if(sign)
        return ans;
        else{
            return ans*-1;
        }
    }
};