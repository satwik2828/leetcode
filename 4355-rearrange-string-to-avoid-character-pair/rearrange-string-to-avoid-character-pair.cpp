class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string s1,s2;
        for(char ch:s){
            if(ch==y) s1+=ch;
            else s2+=ch;
        }
        return s1+s2;
    }
};