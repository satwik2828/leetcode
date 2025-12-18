class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;
        int n=max(word1.length(),word2.length());
        int m=min(word1.length(),word2.length());
            for(int i=0;i<m;i++){
                s+=word1[i];
                s+=word2[i];
            }
            if(word1.length()<word2.length()){
            for(int i=m;i<n;i++){
                s+=word2[i];
            }
            }
            else{
                for(int i=m;i<n;i++){
                s+=word1[i];
            }
            }
            return s;
    }
};