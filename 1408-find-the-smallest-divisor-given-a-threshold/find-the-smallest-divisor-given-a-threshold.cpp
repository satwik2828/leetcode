class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=nums[0];
        for(int i:nums){
            high=max(high,i);
        }
        while(low<=high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=(nums[i]-1)/mid + 1;
            }
            if(sum<=threshold) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};