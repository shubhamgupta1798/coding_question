class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        int a[60]={0};
        for(int i=time.size()-1;i>=0;i--)
        {
            count+=a[(60-(time[i])%60)%60];
            a[time[i]%60]++;
        }
        return count;
    }
};