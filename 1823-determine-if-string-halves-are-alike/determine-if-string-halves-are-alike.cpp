class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length(),fcount=0,scount=0;
        for(char &ch: s){
            ch=tolower(ch);
        }
        for(int i=0;i<n/2;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') fcount++;
        }
        for(int i=n/2;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') scount++;
        }
        return fcount==scount;
    }
};