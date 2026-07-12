class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;
        for(int i:arr) mp[i];
        int k=1;
        for(auto &i:mp){
            i.second=k;
            k++;
        }
        vector<int>ans;
        for(int i:arr){
            ans.push_back(mp[i]);
        }
        return ans;
    }
};