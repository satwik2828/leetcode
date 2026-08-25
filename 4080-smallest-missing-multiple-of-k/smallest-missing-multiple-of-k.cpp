class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool>temp(101,true);
        for(int i:nums) if(i%k==0) temp[i/k]=false;
        for(int i=1;i<=101;i++) if(temp[i]==true) return i*k;
        return 0;
    }
};