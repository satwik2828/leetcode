class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=nums[nums.size()-1]-nums[0]-(2*k);
    if(ans<=0) return 0;
    else return ans;
    }
};