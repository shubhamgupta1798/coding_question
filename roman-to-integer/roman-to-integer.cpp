class Solution {
public:
    vector<pair<char, int>> v;
    vector<int> a;
    int findval(char c)
    {
      
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first==c)
            {
                return v[i].second;
            }
        }
        return 0;
    }
    bool existlarger(int i1,string s)
    {
        
        //cout<<i1;
        
        for(int i=i1+1;i<s.size();i++)
        {
            if(a[i1]<a[i])
            {
                return true;
            }
        }
        return false;
    }
    int romanToInt(string s) {
       
        v.push_back(make_pair('I',1));
        
        v.push_back(make_pair('V',5));
        
        v.push_back(make_pair('X',10));
        
        v.push_back(make_pair('L',50));
        
        v.push_back(make_pair('C',100));
        
        v.push_back(make_pair('D',500));
        
        v.push_back(make_pair('M',1000));
        int ans=0;
        
        for(int i=0;i<s.size();i++)
        {
            a.push_back(findval(s[i]));
            //cout<<a[i];
        }
        for(int i=0;i<s.size();i++)
        {
            int c=a[i];
            
            bool result=existlarger(i,s);
            
            if(result)
                ans-=c;
            else
                ans+=c;
            cout<<c<<result<<ans<<"\n";
        }
        return ans;
    }
};