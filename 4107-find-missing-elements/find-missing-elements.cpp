class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i:nums) mp[i]++;
        vector<int>ans;
        for(int j=mini;j<maxi;j++){
            if(!(mp.find(j+1)!=mp.end())) ans.push_back(j+1);
        }
        return ans;
    }
};