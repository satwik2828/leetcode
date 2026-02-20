class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums) mp[i]++;
        vector<pair<int,int>>ref;
        for(int i:nums) ref.push_back({mp[i],-i});
        sort(ref.begin(),ref.end());
        vector<int>ans;
        for(auto & i:ref){
         ans.push_back(-i.second);
        }
        return ans;
    }
};