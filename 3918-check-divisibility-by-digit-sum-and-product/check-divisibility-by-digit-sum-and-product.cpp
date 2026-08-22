class Solution {
public:
    bool checkDivisibility(int n) {
    int sum=0,pro=1,k=n;
    while(k){
        sum+=k%10;
        pro*=k%10;
        k/=10;
    }
    return n%(sum+pro)==0;
    }
};