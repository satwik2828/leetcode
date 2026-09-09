class Solution {
public:
    long long countCommas(long long n) {
        long long total=0;
        for(long long i=1000;i<=n;i*=1000){
            total+=n-i+1;
        }
        return total;
    }
};