class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
       auto it1=lower_bound(nums.begin(),nums.end(),target);
       if(it1==nums.end() or *it1!=target) return ans;
       auto it2=upper_bound(nums.begin(),nums.end(),target);
        ans[0]=it1-nums.begin();
        ans[1]=prev(it2)-nums.begin();
        return ans;
    }
};