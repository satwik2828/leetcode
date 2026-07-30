class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int k=n/8;//nth_term_of_ap
        int remaining=(k+1)*(n%8);//remaining at last
        int sum=4*k + 4*k*k;//sum_till_nth_term
        return sum+remaining;
    }
};