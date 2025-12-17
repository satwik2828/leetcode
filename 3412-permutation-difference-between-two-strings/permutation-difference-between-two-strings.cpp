class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int>hm(256);
        int sum=0;
        for(int i=0;i<s.length();i++){
            hm[s[i]-'a']=i;
        }
        for(int i=0;i<t.length();i++){
            sum+=abs(hm[t[i]-'a']-i);
        }
        return sum;
    }
};