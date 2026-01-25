class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int minimum=INT_MAX;
        for(int i=0;i<=nums.size()-k;i++){
            int imax=INT_MIN;
            int imin=INT_MAX;
            for(int j=i;j<k+i;j++){
                imax=max(imax,nums[j]);
                imin=min(imin,nums[j]);
            }
            cout<<imax<<" "<<imin<<endl;//1 4 7 9
            minimum=min(minimum,imax-imin);
        }
        return minimum;
    }
};