class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<pair<int,int>>mp;
        for(int i=0;i<arr.size();i++){
           if(mp.empty() || mp.back().first!=arr[i]) mp.push_back({arr[i],1});
           else mp.back().second++;
        }
        sort(mp.begin(),mp.end(),[](const auto &a,const auto &b){
            return a.second<b.second;
        });
        for(int i=0;i<mp.size()-1;i++){
            if(mp[i].second==mp[i+1].second) return false;
        }
        return true;
    }
};