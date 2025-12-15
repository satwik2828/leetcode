class Solution {
public:
    int maxDistinct(string s) {
        vector<int>count(26,0);
        for(char &ch : s){
            count[ch-'a']++;
        }
        int tcount=0;
        for(int &i : count){
            if(i>=1) tcount++;
        }
        return tcount;
    }
};