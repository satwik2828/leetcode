class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0,d_sum=0;
        for(int i=0;i<nums.size();i++){
             sum+=nums[i];
            int temp=nums[i];
            while(temp>0){
                int digit=temp%10;
                d_sum+=digit;
                temp/=10;
            }
        }
        return sum-d_sum;
    }
};