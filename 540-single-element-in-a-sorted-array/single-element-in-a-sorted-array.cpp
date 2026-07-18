class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int left=1,right=n-2;
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        while(left<=right){
            int mid=left+(right-left)/2;
            if((mid%2 and nums[mid]==nums[mid+1]) or (mid%2==0 and nums[mid]==nums[mid-1])) right=mid-1 ;
            else if((mid%2==0 and nums[mid]==nums[mid+1]) or (mid%2 and nums[mid]==nums[mid-1])) left=mid+1;
            else{
                return nums[mid];
            }
        }
        return -1;
    }
};