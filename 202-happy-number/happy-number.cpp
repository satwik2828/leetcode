class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        unordered_set<int>st;
        while(1){
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        if(sum==1) return true;
        if(st.count(sum)) return false;
        st.insert(sum);
        n=sum;
        sum=0;
        }
        return true;
    }
};