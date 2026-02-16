class Solution {
public:
    int reverseBits(int n) {
        vector<int>a(32);
        int k=0;
        while(n>0){
            a[k++]=n%2;
            n/=2;
        }
        long sum=0,x=1;
        for(int i=31;i>=0;i--){
            sum+=a[i]*x;
            x=x*2;
        }
        return sum;
    }
};