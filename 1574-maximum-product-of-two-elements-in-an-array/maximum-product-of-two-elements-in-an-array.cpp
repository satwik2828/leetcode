class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int f_max=INT_MIN,s_max=INT_MIN;
      for(int i:nums){
        if(i>=f_max){
            s_max=f_max;
            f_max=i;
        }
        else if(i>=s_max){
            s_max=i;
        }
      }  
      return (f_max-1)*(s_max-1);
    }
};