class Solution {
public:
    int maximumProduct(vector<int>& nums) {
      //-4 -3 -2 -1
      //-4 -3 -2 1 5
      //1 2 4 5 6
      sort(nums.begin(),nums.end());
      int n=nums.size();
      long pro1=nums[0]*nums[1]*nums[n-1],pro2=nums[n-1]*nums[n-2]*nums[n-3];
      if(pro1<=pro2) return pro2;
      else return pro1;  
    }
};