class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string>compare;
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            reverse(temp.begin(),temp.end());
            compare.push_back(temp);
        }
        for(int i=0;i<words.size();i++){
            if(words[i]==compare[i]){
                return words[i];
                break;
            }
        }
        return "";
    }
};