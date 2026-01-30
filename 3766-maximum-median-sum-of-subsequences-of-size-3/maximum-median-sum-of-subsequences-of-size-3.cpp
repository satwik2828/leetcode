class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()/3;
        long long sum=0,k=2;
        while(n--){
            sum+=nums[nums.size()-k];
            k+=2;
        }
        return sum;
    }
};