class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int most=-1;
        int top[6]={0};
        int bottom[6]={0};
        int temp[6]={0};
        for(int i=0;i<tops.size();i++)
        {
            top[tops[i]-1]++;
            bottom[bottoms[i]-1]++;
            if(bottoms[i]==tops[i])
            {
                temp[bottoms[i]-1]++;
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<6;i++)
        {
            if(top[i]+bottom[i]-temp[i]==tops.size()){
                int c=min(tops.size()-top[i],tops.size()-bottom[i]);
                 ans=min(ans,c);
            }
        }
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};