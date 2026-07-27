class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>a;
        for(int i=0;i<n;i++){
            if(a.count(nums[i])){
                return true;
            }
            a[nums[i]]=i;
        }
        return false;
    }
};