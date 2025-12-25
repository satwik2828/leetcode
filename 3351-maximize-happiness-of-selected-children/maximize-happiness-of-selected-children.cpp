class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0;
        int n=happiness.size(),a=1;
        sort(happiness.begin(),happiness.end());
        sum+=happiness[n-1];
        for(int i=0;i<n-1 && k>1;i++){
            int val=happiness[n-i-2]-a;
            if(val < 0) val=0;
            sum+=val;
            a++;
            k--;
        }
        return sum;
    }
};