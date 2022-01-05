class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
        if(n==0)
        {
            return 1.0;
        }
        else{
            if(n%2==0)
            {
                double temp=myPow(x*x,n/2);
                return temp;
            }
            else{
                
            }
        }
    }
};