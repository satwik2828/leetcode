class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0;
        int n=happiness.size(),a=0;
        sort(happiness.begin(),happiness.end());
        for(int i=0;i<n && k>0;i++){
            int val=happiness[n-i-1]-a;
            if(val < 0) val=0;
            sum+=val;
            a++;
            k--;
        }
        return sum;
    }
};