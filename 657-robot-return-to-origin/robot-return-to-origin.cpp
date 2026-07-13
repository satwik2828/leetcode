class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0,l=0;
        for(char i:moves){
            if(i=='U') u++;
            if(i=='D') u--;
            if(i=='L') l++;
            if(i=='R') l--;
        }
       if(l==0 and u==0) return true;
       else return false;
    }
};