class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        long sum=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int temp=i;
            while(temp>0){
                temp&=temp-1;
                count++;
            }
            if(count==k) sum+=nums[i];
        }
        return sum;
    }
};