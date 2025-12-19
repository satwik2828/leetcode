class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>count(26,0);
        vector<int>ref;
        for(char ch:s){
            count[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(count[i]!=0) ref.push_back(count[i]);
        }
        int x=ref[0];
        for(int i=0;i<ref.size();i++){
            cout<<ref[i];
            if(ref[i]^x) return false;
        }
        return true;
    }
};