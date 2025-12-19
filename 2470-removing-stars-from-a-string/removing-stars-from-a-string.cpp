class Solution {
public:
    string removeStars(string s) {
        vector<char>res;
        for(int i=0;i<s.length();i++){
            if(s[i]!='*') res.push_back(s[i]);
            else res.pop_back();
        }
        string ans="";
        for(char ch: res) ans+=ch;
        return ans;
    }
};