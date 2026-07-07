class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum=0,dsum=0,k=1;
        while(n>0){
            if(n%10!=0){
            sum=sum+(n%10)*k;
            dsum+=n%10;
            k*=10;
            }
            n/=10;
        }
        return sum*dsum;
    }
};