class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        if(n==INT_MIN) return false;
        int k=n&(n-1);
        // cout<<k;
        return k==0;
    }
};