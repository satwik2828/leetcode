class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    //   //-4 -3 -2 -1
    //   //-4 -3 -2 1 5
    //   //1 2 4 5 6
    //   sort(nums.begin(),nums.end());
    //   int n=nums.size();
    //   long pro1=nums[0]*nums[1]*nums[n-1],pro2=nums[n-1]*nums[n-2]*nums[n-3];
    //   if(pro1<=pro2) return pro2;
    //   else return pro1; 
    int f_max=INT_MIN,s_max=INT_MIN,t_max=INT_MIN;
    int f_min=INT_MAX,s_min=INT_MAX; 
    for(int i:nums){
        if(i>=f_max){
            t_max=s_max;
            s_max=f_max;
            f_max=i;
        }
        else if(i>=s_max){
            t_max=s_max;
            s_max=i;
        }
        else if(i>=t_max){
            t_max=i;
        }
        if(i<=f_min){
            s_min=f_min;
            f_min=i;
        }
        else if(i<=s_min){
            s_min=i;
        }
    }
    int a=f_max*s_max*t_max;
    int b=f_min*s_min*f_max;
    return max(a,b);
    }
};