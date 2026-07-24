class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
     int n=nums.size(),ans=1;    
        if(n==1 || n==2) return n;

        else{
            while(ans<=n){
                ans<<=1;
            }
        }
        return ans;
    }
};