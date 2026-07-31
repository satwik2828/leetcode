class Solution {
public:
    int minimumPushes(string word) {
        vector<int>mp(26);
        int count=0,n=word.length();
        for(int i=0;i<n;i++){
            mp[word[i]-'a']++;
        }
         sort(mp.begin(),mp.end(),greater<int>());
        for(int i=0;i<26 && mp[i]>0;i++){
           count+=((i/8)+1)*mp[i];
        }
        return count;
    }
};