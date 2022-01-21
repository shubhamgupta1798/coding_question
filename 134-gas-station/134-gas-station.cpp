class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector<int> diff(n,0);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            diff[i]=gas[i]-cost[i];
            sum+=diff[i];
        }
        int curr=0;
        int inx=0;
        int max_sum=0;
        int max_idx=0;
        if(sum<0)
        {
            cout<<"here";
            return -1;
        }
        for(int i=0;i<n;i++)
        {
            if(curr<0)
            {
                curr=diff[i];
                inx=i;
            }
            else{
            curr+=diff[i];
            }
            if(curr>max_sum)
            {
                max_idx=inx;
            }
        }
        return max_idx;
    }
};