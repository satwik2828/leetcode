class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
    int max_idx=0,min_idx=0,maxi=nums[0],mini=nums[n-1];
    for(int i=1;i<n;i++){
        maxi=max(maxi,nums[i]);
        if(maxi>nums[i]) max_idx=i;
        mini=min(mini,nums[n-i-1]);
        if(mini<nums[n-i-1]) min_idx=n-i-1;
    }
    if(nums.size()==1 || max_idx==0) return 0;
    else return max_idx-min_idx+1;
    
    }
};