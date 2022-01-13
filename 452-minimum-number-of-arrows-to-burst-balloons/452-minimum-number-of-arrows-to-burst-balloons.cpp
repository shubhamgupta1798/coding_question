class Solution {
public:
    //bool comp(const )
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](auto &left, auto &right){
            return left[1]<right[1];
        
        });
        int current=points[0][1];
        int ans=1;
        for(int i=1;i<points.size();i++)
        {
            if(current>=points[i][0])
            {
                current=min(current,points[i][1]);
            }
            else{
                ans++;
                current=points[i][1];
            }
        }
        return ans;
    }
};