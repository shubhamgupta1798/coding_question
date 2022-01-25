class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int k=0,j=0;
        int i=0;
        if(arr.size()==1 || arr.size()==2)
        {
            return false;
        }
        while(arr[i]<arr[i+1])
        {
            k++;
            i++;
        }
        while(i<arr.size()-1 && arr[i]>arr[i+1])
        {
            j++;
            i++;
        }
        if(i==arr.size()-1 && k!=0 && j!=0)
        {
            return true;
        }
        else{
            return false;
        }
            
    }
};