class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans(nums.size());
        int k=0,l=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
            ans[k]=nums[i];
            k+=2;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
            ans[l]=nums[i];
            l+=2;
            }
        }
        return ans;
    }
};