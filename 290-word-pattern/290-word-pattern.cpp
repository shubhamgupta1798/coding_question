class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream strcin(s);
        string str;
        vector<string> v;
        while(strcin >> str){
            v.push_back(str);
        }
        if (pattern.size()!=v.size()) 
            return false;
        map<string, char> s2c;
        map<char, string> c2s;
        for (int i = 0; i < v.size(); ++i) {
            if (s2c[v[i]] == 0 && c2s[pattern[i]] == "") { 
                s2c[v[i]] = pattern[i]; 
                c2s[pattern[i]] = v[i]; 
                continue; 
            }
            if (s2c[v[i]] != pattern[i]) 
                return false;
        }
        return true;
    }
};