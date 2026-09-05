class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini=INT_MAX,maxi=INT_MIN,idx=-1,n=nums.size();
        // vector<int>Max;
        vector<int>Min;
        // for(int i=0;i<n;i++){
        //     maxi=max(maxi,nums[i]);
        //     Max.push_back(maxi);
        // }
        for(int i=n-1;i>=0;i--){
            mini=min(mini,nums[i]);
            Min.push_back(mini);
        }
        reverse(Min.begin(),Min.end());
        for(int i=0;i<n;i++){
            if(maxi<nums[i]) maxi=nums[i];
            if(maxi-Min[i]<=k) {
                idx=i;
                break;
            }
        }
        return idx;
    }
};