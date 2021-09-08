class Solution {
public:
    int fib(int n) {
        long long int fb[31];
        fb[0]=0;
        fb[1]=1;
        for(int i=2;i<31;i++)
        {
            fb[i]=fb[i-1]+fb[i-2];
        }
        return fb[n];
    }
};