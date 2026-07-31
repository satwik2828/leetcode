class Solution {
public:
    int sw(vector<int>nums,int g){
        int sum=0,n=nums.size();
        int left=0,right=0,count=0;
       while(right<n){
        sum+=nums[right];
        while(sum>g && left<=right){
            sum-=nums[left++];
        }
        count+=right-left+1;
        right++;
       } 
       return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        return sw(nums,goal)-sw(nums,goal-1);
    }
};