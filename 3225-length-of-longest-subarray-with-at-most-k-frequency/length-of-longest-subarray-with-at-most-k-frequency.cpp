class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        //he is asking longest subbaray with frequency of every element is k
        int l=0,max_len=0,n=nums.size(),count=0,t=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]<=k){
                count++;
                 max_len=max(max_len,count);
            }
            else{
                while(mp[nums[i]]>k){
                mp[nums[l++]]--;
                t++;
                }
                count-=t-1;
            }
            t=0;
            max_len=max(max_len,count);
        }
        return max_len;
    }
};