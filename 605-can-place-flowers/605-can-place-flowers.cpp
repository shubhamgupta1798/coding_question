class Solution {
public:
    bool con(int i,vector<int>& a)
    {
        if(i==0)
        {
            if(i==a.size()-1)
            {
                return true;
            }
            else{
                if(a[i+1]==0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else{
            if(i==a.size()-1)
            {
                if(a[i-1]==0)
                {
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                if(a[i+1]==0 && a[i-1]==0)
                {
                    return true;
                }
                else{
                     return false;
                }
            }
        }
        
    }
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int temp=0;
        int m=flowerbed.size();
        for(int i=0;i<m;i++)
        {
            if(flowerbed[i]==0)
            {
                if(con(i,flowerbed))
                {
                    flowerbed[i]=1;
                    temp++;
                }
            }
        }
        cout<<temp;
        return n<=temp;
    }
};