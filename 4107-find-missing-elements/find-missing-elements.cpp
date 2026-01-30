class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n=nums.size();
        int a=nums[0],b=nums[n-1],j=1;
        for(int i=a+1;i<=b;i++){
            if(nums[j]!=i) ans.push_back(i);
            else j++;
        }
        return ans;
    }
};