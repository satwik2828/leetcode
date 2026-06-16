class Solution {
public:
    string processStr(string s) {
        string st="";
        for(int letter:s){
        if(letter>='a' && letter<='z') st+=letter;
        else if(letter=='*' && st.size()>=1) st.pop_back();
        else if(letter=='#') st+=st;
        else reverse(st.begin(),st.end());
        }
        return st;
    }
};