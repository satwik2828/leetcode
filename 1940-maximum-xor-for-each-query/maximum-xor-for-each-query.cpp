class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        vector<int>ref(n);
        vector<int>ans(n);
        ref[n-1]=nums[0];
        int k=pow(2,maximumBit)-1;
        for(int i=n-2;i>=0;i--){
            ref[i]=ref[i+1]^nums[n-i-1];
        }
        for(int i=0;i<n;i++){
            ans[i]=k-ref[i];
        }
        return ans;
    }
};