class Solution {
public:
    bool isvowel(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') return true;
    return false;
    }
    bool halvesAreAlike(string s) {
        int n=s.length(),fcount=0,scount=0;
        for(int i=0;i<n/2;i++){
            if(isvowel(s[i])) fcount++;
        }
        for(int i=n/2;i<n;i++){
            if(isvowel(s[i])) scount++;
        }
        return fcount==scount;
    }
};