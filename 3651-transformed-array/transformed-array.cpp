class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
        int k=nums[i]+i;
        if(k>0)  temp.push_back(nums[abs(k)%n]);
        else if(abs(k)%n==0) temp.push_back(nums[i-(abs(nums[i])%n)]);
        else temp.push_back(nums[n-abs(k)%n]);
        }
        return temp;
    }
};