class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>count1(1001,0);
        vector<int>count2(1001,0);
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            count1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            count2[nums2[i]]++;
        }
        for(int i=0;i<count1.size();i++){
            if(count1[i]>0 && count2[i]>0) ans.push_back(i);
        }
        return ans;
    }
};