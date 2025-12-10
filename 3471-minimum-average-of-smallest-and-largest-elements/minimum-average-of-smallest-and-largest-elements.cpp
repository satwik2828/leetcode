class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double minavg=DBL_MAX;
        int i=0,j=nums.size()-1;
        while(i<j){
            double avg=(nums[i]+nums[j])/2.0;
            minavg=min(minavg,avg);
            i++;
            j--;
        }
        return minavg;
    }
};