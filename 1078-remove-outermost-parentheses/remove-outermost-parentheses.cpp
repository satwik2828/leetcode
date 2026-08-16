class Solution {
public:
    string removeOuterParentheses(string s) {
        string t;
        int counter=0;
        for(char ch:s){
            if(ch=='(') {
                counter++;
                if(counter>1) t+=ch;
            }
            else {
                counter--;
                if(counter>0) t+=ch;
            }
        }
        return t;
    }
};