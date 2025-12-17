class Solution {
public:
    vector<string> cellsInRange(string s) {
    vector<string>res;
    for(char i=s[0];i<=s[3];i++){
        for(int j=s[1]-'0';j<=s[4]-'0';j++){
            res.push_back(i+to_string(j));
        }
    }
    return res;
    }
};