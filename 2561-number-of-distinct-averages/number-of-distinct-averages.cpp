class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<float>ans;
        for(int i=0;i<nums.size()/2;i++){
            ans.insert((nums[i]+nums[nums.size()-i-1])/2.0);
        }
        return ans.size();
    }
};