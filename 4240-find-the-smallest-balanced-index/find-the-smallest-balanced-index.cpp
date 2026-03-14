class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        long maxi=1e14;
        long n=nums.size();
        vector<long long>spf(n);
        vector<long long>mpf(n);
        spf[0]=0;
        mpf[n-1]=1;
        for(long i=1;i<n;i++){
            spf[i]=(spf[i-1]+nums[i-1]);
        }
        for(long i=n-2;i>=0;i--){
            if(mpf[i+1]>maxi/nums[i+1]) mpf[i]=maxi;
            else mpf[i]=(1LL*mpf[i+1]*nums[i+1]);
        }
        int smallest_idx=-1;
        for(int i=0;i<n;i++){
            if(spf[i]==mpf[i]){
                smallest_idx=i;
                break;
            }
        }
        return smallest_idx;
    }
};