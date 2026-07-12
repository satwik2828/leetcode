class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.empty()) return {};
        vector<int>temp=arr;
        vector<pair<int,int>>mp;
        for(int i=0;i<arr.size();i++){
            mp.push_back({temp[i],i});
        }
         sort(mp.begin(),mp.end());
        vector<int>ans(arr.size());
        ans[mp[0].second]=1;
        for(int i=1;i<arr.size();i++){
            if(mp[i].first==mp[i-1].first) ans[mp[i].second]=ans[mp[i-1].second];
            else ans[mp[i].second]=ans[mp[i-1].second]+1;
        }
        return ans;
    }
};