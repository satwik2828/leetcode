class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        vector<int>count(10000,0);
        for(int &i:nums){
            count[i]++;
        }
        for(long i=0;i<count.size();i++){
            if(count[i]==n) return i;
        }
        return -1;
    }
};