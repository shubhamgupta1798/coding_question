class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int m=INT_MAX;
        vector<int> v;
        long long int j=0;
        while(j*j<=m)
        {
            //v.push_back(j*j);
            j++;
        }
        for(long long int i=0;i<j;i++)
        {
            long long int m2=c-i*i;
            if(m2<0)
            {
                return false;
            }
            long long int cm=sqrt(m2);
            if((cm*cm)==m2)
            {
                return true;
            }
        }
        return false;
    }
};