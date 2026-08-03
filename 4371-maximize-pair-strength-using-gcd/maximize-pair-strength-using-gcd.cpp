class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
       int n=nums.size();
       long long maxi=LLONG_MIN;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            long long k=__gcd(nums[i],nums[j]);
            long long l=(1ll*nums[i]*nums[j])/(1ll*k*k);
            maxi=max(maxi,l);
        }
       }
       return maxi;
    }
};