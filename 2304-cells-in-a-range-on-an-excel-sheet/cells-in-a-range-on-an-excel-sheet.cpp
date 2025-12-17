class Solution {
public:
    vector<string> cellsInRange(string s) {
    vector<string>res;
    int start=s[1]-'0';
    int end=s[4]-'0';
    for(char i=s[0];i<=s[3];i++){
        for(int j=start;j<=end;j++){
            res.push_back(i+to_string(j));
        }
    }
    return res;
    }
};