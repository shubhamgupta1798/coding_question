class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2)
        {    
            return nums.size();
        }
        else{
            int n= nums.size();
            int pos[n+2];
            int neg[n+2];
            memset(pos,0,sizeof(pos));      
            memset(neg,0,sizeof(neg));
            //int ans=0;
            for(int i=1;i<nums.size();i++)
            {
                neg[i]=0;
                pos[i]=0;
                for(int j=0;j<i;j++)
                {
                    if(nums[i]<nums[j])
                    {
                        neg[i]=max(pos[j]+1,neg[i]);
                        
                    }
                    else if(nums[i]>nums[j])
                    {
                        pos[i]=max(neg[j]+1,pos[i]);
                    }
                }
                
                    //ans=max({pos[i],neg[i],ans});
            }
            return max(neg[n - 1], pos[n- 1])+1;
            
        }
        return 0;
    }
};