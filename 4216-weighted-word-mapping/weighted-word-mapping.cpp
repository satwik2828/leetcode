class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s="";
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            int sum=0;
            for(int i=0;i<temp.size();i++){
                sum+=weights[temp[i]-'a'];
            }
            s+='a'+(25-(sum%26));
        }
        return s;
    }
};