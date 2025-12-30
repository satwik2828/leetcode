class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int mini=INT_MAX;
       for(int i=0;i<nums.size();i++){
        int x=nums[i],sum=0;
        while(x){
            sum+=x%10;
            x/=10;
        }
    if(sum==i) mini=min(mini,i);
       } 
       if(mini==INT_MAX) return -1;
       return mini;
    }
};