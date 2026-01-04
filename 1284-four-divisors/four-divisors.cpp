class Solution {
public:
    int Divcount(int n){
        int count=0,tsum=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0) {
                if(i!=n/i){
                count+=2;
                tsum+=i+n/i;
                }
                else{
                    count++;
                    tsum=i;
                }
            if(count>4){
        return 0;
        }
            }
        }
        if(count==4){
            return tsum;
        }
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int &i: nums){
            sum+=Divcount(i);
        }
        return sum;
    }
};