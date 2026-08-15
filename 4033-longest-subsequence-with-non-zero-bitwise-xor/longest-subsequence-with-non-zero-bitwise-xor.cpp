class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int x=0,count=0,flag=0,n=nums.size();
        for(int i:nums){
            x^=i;
            if(i) flag=1;
        }
        if(!flag) return 0;
        return x?n:n-1;
    }
};