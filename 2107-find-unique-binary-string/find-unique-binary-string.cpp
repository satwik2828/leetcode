class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string s="";
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i][i]=='0') s+='1';
            else s+='0';
        }
        return s;
    }
};