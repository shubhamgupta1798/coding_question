class Solution {
public:
    int mySqrt(int x) {
      for(long long int i=0;i<=x;i++)
      {
          if(i*i==x)
              return i;
          if(x<i*i)
          {
              return i-1;
          }
      }
        return 0;
    }
};