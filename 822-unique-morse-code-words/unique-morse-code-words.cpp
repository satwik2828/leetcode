class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>ref={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>res;
        for(string & word:words){
            string temp="";
           for(char ch: word){
            temp+=ref[ch-'a'];
           }
           res.insert(temp);
        }
        return res.size();
    }
};