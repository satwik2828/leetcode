class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int l=0,r=n-1;
        while(l<r){
            while(!isalpha(s[l]) && l<r) l++;
            while(!isalpha(s[r]) && l<r) r--;
            swap(s[l],s[r]);
            l++;
            r--;
        }
        return s;
    }
};