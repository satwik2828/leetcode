class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       map<int,int>mp;
       int maxfreq=0;
       for(int i:nums){
        mp[i]++;
        maxfreq=max(maxfreq,mp[i]);
       }
       vector<vector<int>>ans(maxfreq);
     for(auto & p : mp){
        for(int i=0;i<p.second;i++){
            ans[i].push_back(p.first);
        }
     }
    return ans;
    }
};