class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(),x,y;
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    x=i;
                    y=j;
                    flag=1;
                }
            }
            if(flag==1) break;
        }
        return {x,y};
    }
};