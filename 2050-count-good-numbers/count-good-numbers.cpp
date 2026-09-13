class Solution {
public:
    int be(long long x,long long n){
        long long a=1;
        long long mod=1e9+7;
        while(n){
            if(n&1){
                a=(a*x)%mod;
            }
            x=(x*x)%mod;
            n/=2;
        }
        return a%mod;
    }
    int countGoodNumbers(long long n) {
        int ans=1;
        long long m=1e9+7;
        long long p=(n+1)/2;
        long long q=n/2;
        ans=be(5,p);
        ans=((ans%m)*(be(4,q)%m))%m;
        return ans;
    }
};