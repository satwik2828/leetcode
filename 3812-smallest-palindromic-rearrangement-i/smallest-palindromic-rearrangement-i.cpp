class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        if(n==1) return s;
        string k;
        int l=n/2;
        vector<int>freq(26);
        for(int i=0;i<l;i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            while(freq[i]--) k+='a'+i;
        }
        if(n&1){
            k+=s[l];
            l++;
        }
        for(int i=l;i<n;i++){
            k+=k[n-i-1];
        }
        return k;
    }

};