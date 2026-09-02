class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    int e_count=0,o_count=0,n=nums1.size();
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0) e_count++;
            else o_count++;
        }
    if(o_count>=0) return true;
        else return  false;
    }
};