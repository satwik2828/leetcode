class Solution {
public:
    bool is_prime(int n){
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            if(is_prime(__builtin_popcount(i))) count++;
        }
        return count;
    }
};