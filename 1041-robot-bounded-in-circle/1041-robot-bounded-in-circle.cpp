class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dir=0;
        int a=0,b=0;
        for(int i=0;i<instructions.size();i++)
        {
            if(instructions[i]=='G'){
                if(dir==0)
                {
                    a++;
                }
                else if(dir==1)
                {
                    b++;
                }
                else if(dir==2)
                {
                    a--;
                }
                else if(dir==3)
                {
                    b--;
                }
            }
            if (instructions[i] == 'R')
                dir = (dir + 1) % 4;
            else if (instructions[i] == 'L')
                dir = (dir + 3) % 4;
            
        }
        if(a==0 && b==0)
        {
            return true;
        }
        if(dir!=0)
        {
            return true;
        }
        return false;
    }
};