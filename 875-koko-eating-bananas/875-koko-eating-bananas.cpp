class Solution {
public:
    bool caneat(vector<int>& piles, int h,int k)
    {
        int ans=0;
        if(k==0)
        {
            return false;
        }
        for(int i=0;i<piles.size();i++)
        {
            ans+=(piles[i])/k+((piles[i]%k==0)?0:1);
        }
        //cout<<ans;
        return ans<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int low=0;
        long long int high=INT_MAX;
        int last=-1;
       //cout<<caneat(piles,h,22)<<" ";
        while(high>=low)
        {
           long long int mid=(high+low)/2;
            //cout<<mid<<" ";
           
           if(caneat(piles,h,mid))
           {
               high=mid-1;
               //cout<<last<<" ";
               last=mid;
           }
            else{
                low=mid+1;
            }
        }
        return last;
    }
};