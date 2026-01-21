class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int l=0,r=n-1;
        while(l<=r){
            while(r>=0 and !isalpha(s[r])) r--;
            while(l<s.size() and !isalpha(s[l])) l++;
            if(l<s.size() and l<=r and isalpha(s[l]) && isalpha(s[r])){
                swap(s[l],s[r]);
                r--;
                l++;
            }
        }
        return s;
    }
};