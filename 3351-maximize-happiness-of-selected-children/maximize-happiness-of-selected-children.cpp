class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0;
        int n=happiness.size();
        sort(happiness.begin(),happiness.end());
        for(int i=0;i<k;i++){
            int val=happiness[n-i-1]-i;
            if(val < 0) val=0;
            sum+=val;
        }
        return sum;
    }
};