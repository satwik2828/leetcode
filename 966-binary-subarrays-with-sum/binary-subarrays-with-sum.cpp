class Solution {
public:
    int sw(vector<int>nums,int g){
        int sum=0,n=nums.size();
        int left=0,right=0,count=0;
       for(right=0;right<n;right++){
        sum+=nums[right];
        while(sum>g && left<=right){
            sum-=nums[left++];
        }
        count+=right-left+1;
       } 
       return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        return sw(nums,goal)-sw(nums,goal-1);
    }
};