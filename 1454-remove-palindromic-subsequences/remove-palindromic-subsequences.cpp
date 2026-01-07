class Solution {
public:
    int removePalindromeSub(string s) {
        string s2=s;
        reverse(s.begin(),s.end());
        if(s2==s) return 1;
        else return 2;
    }
};