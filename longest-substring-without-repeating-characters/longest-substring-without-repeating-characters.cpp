#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
       int count=0;
        
        for(int i=0;i<s.size();i++)
        {
            int curr=0;
            vector<int> v(256);
            //cout<<v[22];
           // v.resize(26);
            int c;
            //cout<<i;
            if(s.size()>i+125)
               {
                   c=i+125;
               }
               else{
                   c=s.size();
               }
            for(int j=i;j<c;j++)
            {
                if(v[s[j]]==0)
                {
                    v[s[j]]++;
                    curr++;
                    if(count<curr)
                    {
                        count=curr;
                    }
                    
                }
                else{
                    //cout<<j;
                    break;
                }
            }
        }
        return count;
    }
};