class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
       unordered_map<int,int>mp;
       int sum=0,count=0;
       mp[0]=1;
       for(int i=0;i<n;i++){
        sum+=nums[i];
        int r=((sum%k)+k)%k;
        count+=mp[r];
        mp[r]++;

       }//4 4 4 2 4 0
       return count;
    }
};