class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string s1,s2,s3;
        for(char ch:s){
            if(ch==x) s1.push_back(ch);
            else if(ch==y) s3.push_back(ch);
            else s2.push_back(ch);
        }
        return s3+s2+s1;
    }
};