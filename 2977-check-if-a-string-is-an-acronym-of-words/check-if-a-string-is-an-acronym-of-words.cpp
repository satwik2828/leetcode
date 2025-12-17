class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string comp;
        for(string word : words){
            comp.push_back(word[0]);
        }
        return comp==s;
    }
};