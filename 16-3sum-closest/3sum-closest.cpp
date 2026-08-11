class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),maxi=abs(nums[0]+nums[1]+nums[2]-target),ans=0;
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1,l=n-1;
            while(j<l){
                int sum=nums[i]+nums[j]+nums[l];
                if(sum==target) return sum;
                if(sum<target){
                    j++;
                }
                else {
                    l--;
                }
                if(maxi>=abs(sum-target)) maxi=abs(sum-target),ans=sum;
            }
        }
        return ans;  
    }
};