class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int c1=0,c2=0;
        unordered_map<int,int>mp1,mp2;
        for(auto & i:nums1) mp1[i]++;
        for(auto & i:nums2) mp2[i]++;
        for(auto &i:nums1){
            if(mp2[i]>0) c1++;
        }
        for(auto &i:nums2){
            if(mp1[i]>0) c2++;
        }
        return {c1,c2};
    }
};