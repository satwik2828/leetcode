class Solution {
public:
    string clearDigits(string s) {
        vector<char>st;
        for(int i=0;i<s.length();i++){
            if(!isdigit(s[i])){
                st.push_back(s[i]);
            }
            else{
                st.pop_back();
            }
        }
        string res;
        for(char& ch:st){
            res.push_back(ch);
        }
        return res;
    }
};