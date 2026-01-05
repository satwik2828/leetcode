class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>ref;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            ref.insert(nums[i]);
        }
        int n=ref.size(),ans=0;
        int l=0,distinct=0;
        for(int r=0;r<nums.size();r++){
            freq[nums[r]]++;
            if(freq[nums[r]]==1) distinct++;
        while(distinct==n){
        ans+=nums.size()-r;
         freq[nums[l]]--;
         if(freq[nums[l]]==0) distinct--;
         l++;
        }
        }
    return ans;
    }
};