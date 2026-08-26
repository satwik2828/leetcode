class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0,k=5;
        while(n>=k){
            ans+=n/k;
            k=k*5;
        }
        return ans;
    }
};