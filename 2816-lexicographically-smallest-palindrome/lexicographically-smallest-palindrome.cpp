class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[n-i-1]>s[i]) s[n-i-1]=s[i];
            else s[i]=s[n-i-1];
        }
        return s;
    }
};