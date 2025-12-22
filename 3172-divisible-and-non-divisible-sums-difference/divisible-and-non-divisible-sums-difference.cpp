class Solution {
public:
    int differenceOfSums(int n, int m) {
        int total_sum=n*(n+1)/2;
        int multiplier = n/m;
        int non_divisible= m * multiplier*(multiplier+1)/2;
        return total_sum-(2*non_divisible);
    }
};