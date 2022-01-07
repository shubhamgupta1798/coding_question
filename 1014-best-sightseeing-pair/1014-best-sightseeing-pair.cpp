class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int maxOverallGain = INT_MIN;
        int maxEndRight = values[n-1] - (n-1);
        for(int i=n-2; i>=0; i--)
        {
            maxEndRight = max(maxEndRight, values[i+1] - (i+1));
            maxOverallGain = max(maxOverallGain, values[i] + i + maxEndRight);
        }
        return maxOverallGain;
    }
};