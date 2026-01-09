class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int  n=nums.size();
        long long sum=0;
        
        for(int i=0;i<n/2;i++){
            sum+=stoll(to_string(nums[i])+to_string(nums[n-i-1]));
        }
        if(n&1){
        sum+=nums[n/2];
        }
        return sum;
    }
};