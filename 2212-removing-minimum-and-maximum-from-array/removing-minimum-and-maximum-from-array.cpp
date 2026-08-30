class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int n =nums.size(),max_idx=-1,min_idx=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==maxi) max_idx=i+1;
            if(nums[i]==mini) min_idx=i+1;
        }
        // cout<<maxi<<" "<<mini<<endl;
        int ans=max(max_idx,min_idx);
        int ans1=max(n-max_idx+1,n-min_idx+1);
        int ans2=min(max_idx,n-max_idx+1)+min(min_idx,n-min_idx+1);
        // cout<<ans<<" "<<ans1<<" "<<ans2<<endl;
        return min({ans,ans1,ans2});
    }
};