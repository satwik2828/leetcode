class Solution {
public:
    string removeStars(string s) {
        int pos=0;
        for(char &ch:s){
            if(ch=='*'){
                pos--;
            }
            else {
                s[pos++]=ch;
        }
        }
        s.resize(pos);
        return s;
    }
};