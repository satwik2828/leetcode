class Solution {
public:
    bool is_possible(vector<int>&nums,int k,int test){
        int sum=0,count=1;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=test){
                sum+=nums[i];
            }
            else{
                sum=nums[i];
                count++;
            }
        }
        return count<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=*max_element(nums.begin(),nums.end());
        int acc=accumulate(nums.begin(),nums.end(),0);
        int low=maxi,high=acc;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(is_possible(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    return ans;
    }
};