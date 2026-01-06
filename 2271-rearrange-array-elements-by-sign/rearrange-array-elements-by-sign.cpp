class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int n=nums.size();
        int k=0,l=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                 ans[k]=nums[i];
                 k+=2;
            }
            else{
                 ans[l]=nums[i];
                 l+=2;
            }
        }
        return ans;
    }
};