class Solution {
public:
    bool hasSameDigits(string s) {
        int n=s.length();
        for(int i=0;i<n-2;i++){
            for(int j=n-1;j>i;j--){
                s[j]=((s[j]-'0')+(s[j-1]-'0'))%10 + '0';
            }
        }
     return s[n-2]==s[n-1];
    }
};