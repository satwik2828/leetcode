class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>temp1;
        vector<int>temp2;
        temp1.push_back(nums[0]);
        temp2.push_back(nums[1]);
        int i=2,n=nums.size();
        // if(n==2) return nums;
        while(i<n){
            if(temp1.back()>temp2.back()) temp1.push_back(nums[i]);
            else temp2.push_back(nums[i]);
            i++;
        }
        for(int i:temp2) temp1.push_back(i);
        return temp1;
    }
};