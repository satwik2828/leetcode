class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_len=0,x=0,count=0;
        for(int i:nums){
            x^=i;
            count++;
            if(x!=0) max_len=max(max_len,count);
           // cout<<count<<" "<<max_len<<" "<<x<<endl;
        }
       // max_len=max(max_len,count);
        return max_len;
    }
};