class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size(),left=0,max_len=0,count=0;
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            count++;
            while(mp[s[i]]>2){
                mp[s[left++]]--;
                count--;
            }
            max_len=max(max_len,count);
        }
        return max_len;
    }
};