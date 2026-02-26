class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>mp(arr.size());
        for(int i=0;i<arr.size();i++){
            mp[i].first=__builtin_popcount(arr[i]);
            mp[i].second=arr[i];
        }
        sort(mp.begin(),mp.end());
        vector<int>ans;
        for(int i=0;i<mp.size();i++){
           ans.push_back(mp[i].second);
        }
        return ans;
    }
};