class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int max1=*max_element(nums.begin(),nums.end());
        if(k==n) return max1;
        int maxi=-1;
        for(int i:nums) mp[i]++;
        if(mp.size()==1){
            if(mp[nums[0]]==k) return nums[0];
        }
        if(k==1){
            for(int i:nums){
                if(mp[i]==1) maxi=max(maxi,i);
            }
            return maxi;
        }
        int l1=nums[0],l2=nums[n-1];
        if(mp[l1]==1 && mp[l2]!=1) return l1;
        else if(mp[l1]!=1 && mp[l2]==1) return l2;
        else if(mp[l1]==1 && mp[l2]==1) return max(l1,l2);
        else return -1;
    }
};