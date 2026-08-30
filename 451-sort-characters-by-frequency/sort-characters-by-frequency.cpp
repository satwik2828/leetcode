class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        vector<vector<char>>bucket(n+1);
        for(auto &[key,val]:mp){
            bucket[val].push_back(key);
        }
        string ans;
        for(int i=n;i>=0;i--){
            for(auto ch:bucket[i]){
                ans.append(i,ch);
            }
        }
        return ans;
    }
};