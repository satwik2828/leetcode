class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>ans;
        vector<int>count(1001,0);
        for(int i=0;i<nums1.size();i++){
            count[nums1[i][0]]+=nums1[i][1];
        }
        for(int i=0;i<nums2.size();i++){
            count[nums2[i][0]]+=nums2[i][1];
        }
        for(int i=0;i<count.size();i++){
            if(count[i]!=0){
                ans.push_back({i,count[i]});
            }
        }
        return ans;
    }
};