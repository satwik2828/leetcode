class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int Single_sum=0,Double_sum=0;
        for(int i=0;i<nums.size();i++){
            if(floor(log10(nums[i])+1)==2) Double_sum+=nums[i];
            else Single_sum+=nums[i];
        }
        return Single_sum!=Double_sum;
    }
};