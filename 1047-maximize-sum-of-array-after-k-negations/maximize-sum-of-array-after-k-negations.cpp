class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),sum=0;
        for(int i=0;i<n;i++){
        if(k>0 && nums[i]<0){
        nums[i]=-nums[i];
        k--;
        }
        // else{
        // sum+=nums[i];
        // }
        }
        sort(nums.begin(),nums.end());
        while(k--){
            nums[0]=-nums[0];
        }
        for(int i=0;i<n;i++) sum+=nums[i];
        return sum;
    }
};