class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),maximum=INT_MIN;
        for(int i=0;i<n/2;i++){
            maximum=max(maximum,nums[i]+nums[n-i-1]);
        }
        return maximum;
    }
};