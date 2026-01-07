class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        vector<int>count(1000,0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(nums[i]==key){
            for(int j=0;j<n;j++){
               if(abs(i-j)<=k) count[j]++; 
            }
            }
        }
        for(int i=0;i<count.size();i++){
            if(count[i]>0) ans.push_back(i);
        }
        return ans;
    }
};