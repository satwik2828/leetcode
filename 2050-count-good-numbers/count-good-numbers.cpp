class Solution {
public:
    long long Pow(long  x,long long n,long long m){
        if(n==0) return 1;
        long long ans=Pow(x,n/2,m);
        if(n%2==0) return (ans*ans)%m;
        return (x*ans*ans)%m;
    }
    int countGoodNumbers(long long n) {
        int ans;
        long long m=1e9+7;
        long long p=(n+1)/2;
        long long q=n/2;
        ans=Pow(5,p,m);
        ans=((ans%m)*(Pow(4,q,m)%m))%m;
        return ans;
    }
};