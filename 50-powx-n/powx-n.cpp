class Solution {
public:
    double Pow(double x,int n){
        if(n==0) return 1;
        double ans=Pow(x,n/2);
        if(n%2==0) return ans*ans;
        return x*ans*ans;
    }
    double myPow(double x, int n) {
        long long N=n;
    if(N<0) return 1.0/Pow(x,-N);
    return Pow(x,N);
    }
};