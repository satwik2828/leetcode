class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums) mp[i]++;
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i]) sum+=nums[i];
            else break;
        }
        while(mp.find(sum)!=mp.end()){
            sum++;
        }
        return sum;
    }
};