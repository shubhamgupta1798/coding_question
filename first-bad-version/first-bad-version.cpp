// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int bad(int left,int right)
    {
        //cout<<left<<right;
        if(isBadVersion(left))
        {
            return left;
        }
        else{
            bool mid=isBadVersion((right-left)/2+left);
            if(mid)
            {
                return bad(left,(right-left)/2+left);
            }
            else{
                return bad((right-left)/2+left+1,right);
            }
        }
        
    }
    int firstBadVersion(int n) {
        return bad(1,n);
    }
};