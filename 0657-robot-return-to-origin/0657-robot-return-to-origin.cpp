class Solution {
public:
    bool judgeCircle(string moves) {
        
        int n=moves.size();
        int hor=0,ver=0;
        for(int i=0;i<n;i++){
            
            if(moves[i]=='U')
                ver++;
            else if(moves[i]=='D')
                ver--;
            else if(moves[i]=='R')
                hor++;
            else hor--;
        }
        return hor==0 && ver==0;
        
    }
};