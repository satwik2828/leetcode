class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>hm;
        int sum=0;
        for(int i=0;i<s.length();i++){
            hm[s[i]]=i;
        }
        for(int i=0;i<t.length();i++){
            sum+=abs(hm[t[i]]-i);
        }
        return sum;
    }
};