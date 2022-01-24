class Solution {
public:
    bool detectCapitalUse(string word) {
         int lower=0;
        if(word[0]>='A' &&word[0]<='Z')
        {
           
            //continue;
            for(int i=1;i<word.size();i++)
            {
                if(word[i]>='a' && word[i]<='z')
                {
                    lower++;
                }
            }
            if(lower==word.size()-1 || lower==0)
            {
                return true;
            }
            else{
                return false;
            }
        }
        else{
            for(int i=0;i<word.size();i++)
            {
                if(word[i]>='a' && word[i]<='z')
                {
                    lower++;
                }
            }
            if(lower==word.size())
            {
                return true;
            }
          return false;  
        }
    }
};