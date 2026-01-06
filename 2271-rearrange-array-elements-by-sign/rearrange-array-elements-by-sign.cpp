class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int k=0,l=1;
        for(int &i:nums){
            if(i>0){
                 ans[k]=i;
                 k+=2;
            }
            else{
                 ans[l]=i;
                 l+=2;
            }
        }
        return ans;
    }
};