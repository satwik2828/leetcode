class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;
        unordered_set<string>res;
        for(int i=0;i<words.size();i++){
            string x=words[i];
            reverse(x.begin(),x.end());
            if(res.find(x)!=res.end())count++;
            else res.insert(words[i]);
        }
        return count;
    }
};