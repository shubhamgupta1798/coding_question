class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans=0;
        int last_index=-1;
        for(int i=0;i<seats.size();i++)
        {
            if(seats[i]==1)
            {
                if(last_index==-1)
                {
                    ans=max(ans,i);
                }
                else{
                    int mid=(last_index+i)/2;
                    ans=max(min({mid-last_index,i-mid}),ans);
                    
                }
                last_index=i;
            }
        }
        int temp=seats.size()-max(0,last_index)-1;
        ans=max({ans,temp});
        return ans;
    }
};