class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi=INT_MIN,n=nums.size();
        vector<long long>prefixGcd(n);
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            prefixGcd[i]=__gcd(nums[i],maxi);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long sum=0;
        for(int i=0;i<n/2;i++){
            sum+=__gcd(prefixGcd[i],prefixGcd[n-i-1]);
        }
        return sum;
    }
};