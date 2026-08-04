class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
    int n=nums.size();
    if(n==1){
        return 0;
    }
    for(int i=0;i<n;i++){
        nums[i]=nums[i]%k;
    }
    for(int i=0;i<n-1;i++){
        if(nums[i]==0 && nums[i+1]==0) return true;
    }
    unordered_map<int,int>mp;
    long long sum=0,count=0;
    mp[0]=1;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        long long l=((sum%k)+k)%k;
        if(nums[i]==0){
            continue;
        }
        count+=mp[l];
        if(count>=1) return true;// 0 0
        mp[l]++;
    }
       return false;
    }
};