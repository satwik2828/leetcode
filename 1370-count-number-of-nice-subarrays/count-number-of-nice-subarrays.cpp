class Solution {
public:
    int atmost(vector<int> &nums,int k){
        int odd=0,l=0,count=0;
        for(int r=0;r<nums.size();r++){
            if(nums[r]%2) odd++;
            while(odd>k){
                if(nums[l]%2) odd--;
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k) - atmost(nums,k-1);
    }
};