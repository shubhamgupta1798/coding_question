class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
      for(int i=0;i<strs[0].size();i++)
      {
          bool common=true;
          for(int j=1;j<strs.size();j++)
          {
              if(strs[j].size()<i){
                  common=false;
                  break;
              }
              else{
                  if(strs[j][i]==strs[0][i])
                  {
                      continue;
                  }
                  else{
                      common=false;
                      break;
                  }
              }
          }
          if(common)
          {
              ans=ans+strs[0][i];
          }
          else{
              break;
          }
      }
        return ans;
    }
};