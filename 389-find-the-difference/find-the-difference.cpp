class Solution {
public:
    char findTheDifference(string s, string t) {
       vector<int>freq(26);
       for(int i:s) freq[i-'a']++;
       for(int i:t) freq[i-'a']--;
       char ch;
       for(int i=0;i<freq.size();i++){
        if(freq[i]==-1) {
            ch=i+'a';
        }
       }
        return ch;
    }
};