class Solution {
public:
    vector<bool>primes;
    void seive(int maxi){
        primes.resize(maxi+1);
        for(int i=2;i<=maxi;i++) primes[i]=true;
        for(int i=2;i*i<=maxi;i++){
            for(int j=i*i;j<=maxi;j+=i){
                primes[j]=false;
            }
        }
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size(),ans=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
           maxi=max(maxi,max(nums[i][i],nums[i][n-i-1]));
        }
        seive(maxi);
        for(int i=0;i<n;i++){
            if(primes[nums[i][i]]) ans=max(ans,nums[i][i]);
            if(primes[nums[i][n-i-1]]) ans=max(ans,nums[i][n-i-1]);
        }
        return ans;
    }
};