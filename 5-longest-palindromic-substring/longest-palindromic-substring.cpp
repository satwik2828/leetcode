class Solution {
public:
    int lps(string &s ,int i,int j){
        int n=s.length();
        while(i>=0 && j<n && s[i]==s[j]){
            i--;
            j++;
        }
        return j-i-1;
    }
    string longestPalindrome(string s) {
        int n=s.length(),maxlen=1,start_idx=0;
        for(int i=0;i<n;i++){
            int len1=lps(s,i,i);
            int len2=lps(s,i,i+1);
            int len=max(len1,len2);
            if(len>maxlen){
                maxlen=len;
                start_idx=i-(len-1)/2;
            }
        }
        return s.substr(start_idx,maxlen);
    }
};