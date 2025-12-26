class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto i = find(nums.begin(),nums.end(),target);
        if(i!=nums.end()){
            int index=distance(nums.begin(),i);
            return index;
        }
        return -1;
    }
};