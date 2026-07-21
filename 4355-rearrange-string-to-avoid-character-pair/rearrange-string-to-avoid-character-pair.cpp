class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string s1,s2;
        for(char ch:s){
            if(ch==y) s1.push_back(ch);
            else s2.push_back(ch);
        }
        return s1+s2;
    }
};