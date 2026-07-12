class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>st(arr.begin(),arr.end());
        unordered_map<int,int>mp;
        int k=1;
        for(int i:st){
            mp[i]=k;
            k++;
        }
        vector<int>ans;
        for(int i:arr){
            ans.push_back(mp[i]);
        }
        return ans;
    }
};