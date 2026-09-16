class Solution {
public: 
    set<vector<int>>st;
    void rec(int i,vector<int>&temp,vector<int>&nums,vector<vector<int>>&ans){
        if(i==nums.size()){
            if(!st.contains(temp))ans.push_back(temp),st.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        rec(i+1,temp,nums,ans);
        temp.pop_back();
        rec(i+1,temp,nums,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        rec(0,temp,nums,ans);
        return ans;
    }
};