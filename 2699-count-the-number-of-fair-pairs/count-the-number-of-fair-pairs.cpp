class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());//0 1 4 4 5 7
        long long c=0,n=nums.size();
        for(int i=0;i<n;i++){
            auto it1=lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i]);
            auto it2=upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i]);
            c+=it2-it1;
        }
        return c;
    }
};