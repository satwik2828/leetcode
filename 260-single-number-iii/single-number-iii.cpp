class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long x=0;
        for(int i:nums) x^=i;
        long long k=x&(-x);//rightmost differnt setbit
        int a=0,b=0;
        for(int i:nums){
            if((long long)i&k) a^=i;
            else b^=i;
        }
        return {a,b};
    }
};