class NumArray {
public:
    int num[120000]={0};
    int length;
    void create_v(int left,int right,vector<int>& nums,int i)
    {
        if(left==right)
        {
            num[i]=nums[left];
            return;
        }
        int mid=(left+right)/2;
        create_v(left,mid,nums,2*i+1);
        create_v(mid+1,right,nums,2*i+2);
        num[i]=num[2*i+1]+num[2*i+2];
        return;
    }
    NumArray(vector<int>& nums) {
        int left=0;
        length=nums.size()-1;
        int right=nums.size()-1;
        int i=0;
        
        int mid=(left+right)/2;
        create_v(left,mid,nums,2*i+1);
        if(length!=0){
            create_v(mid+1,right,nums,2*i+2);
            num[i]=num[2*i+1]+num[2*i+2];
        }
        else{
            num[i]=num[2*i+1];
        }
        // for(int i=0;i<4*right;i++)
        // {
        //     cout<<num[i]<<" ";
        // }
        // cout<<"\n";
        return;
    }
    void fn2(int left,int right,int index,int val,int i)
    {
        if(left==right)
        {
            num[i]=val;
            return;
        }
        else{
            int mid=(left+right)/2;
            if(index<=mid)
                fn2(left,mid,index,val,2*i+1);
            else{
                fn2(mid+1,right,index,val,2*i+2);
            }
            num[i]=num[2*i+1]+num[2*i+2];
        }
    }
    void update(int index, int val) {
        int left=0;
        int right=length;
        int i=0;
        fn2(left,right,index,val,i);
        return ;
    }
    int fn(int c_left,int c_right,int left, int right,int c)
    {
        if(c_left==c_right)
        {
            if(left<=c_left && c_right<=right)
            {
                return num[c];
            }
            else{
                return 0;
            }
        }
        if(left<=c_left && c_right<=right)
        {
            return num[c];
        }
        if(c_left>right || c_right <left)
        {
            return 0;
        }
        //else if(left<=c_left || c_right<=right){
            int mid=(c_left+c_right)/2;
            int a=fn(c_left,mid,left,right,2*c+1);
            
            a+=fn(mid+1,c_right,left,right,2*c+2);
            return a;
        
        return 0;
    }
    int sumRange(int left, int right) {
        int temp_l=0;
        int temp_r=length;
        // for(int i=0;i<4*right;i++)
        // {
        //     cout<<num[i]<<" ";
        // }
        // cout<<"\n";
        
        //check completely inside
        if(left<=temp_l && temp_r<=right)
        {
            return num[0];
        }
        //check overlap
        if(left>length || right<0)
        {
            return 0;
        }
            //cout<<"here";
            int mid=(temp_l+temp_r)/2;
            int i=0;
            int a=fn(temp_l,mid,left,right,2*i+1);
            
            a+=fn(mid+1,temp_r,left,right,2*i+2);
            return a;
        
        //check outside
        
        return 0;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */