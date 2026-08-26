class Solution {
public:
    int rec(int k,int sum,vector<int>&nums){
        int total=0;
        if(k== nums.size()) return sum;
        total+=rec(k+1,nums[k]^sum,nums);
        total+=rec(k+1,sum,nums);
        return total;
    }
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int ans=rec(0,0,nums);
        return ans;
    }
};