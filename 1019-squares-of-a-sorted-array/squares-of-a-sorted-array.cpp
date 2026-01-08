class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       vector<int>ans(nums.size());
       int l=0,r=nums.size()-1;
       for(int i=nums.size()-1;i>=0;i--){
        
        if(nums[l]<0) nums[l]=-nums[l];
        if(nums[r]<0) nums[r]=-nums[r];
        if(nums[l]<nums[r]){
            ans[i]=nums[r]*nums[r];
            r--;
        }
        else{
            ans[i]=nums[l]*nums[l];
            l++;
        }
       }
       return ans;
    }
};