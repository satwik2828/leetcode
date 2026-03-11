class Solution {
public:
    int bitwiseComplement(int n) {
        long long k=1,ans=0;
        if(n==0)return 1;
        while(n){
            int digit=n%2;
            if(digit==1) ans+=0;
            else ans+=k;
            k*=2;
            n/=2;
        }
        return ans;
    }
};