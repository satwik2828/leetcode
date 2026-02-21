class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>mp(101,0);
        for(int i: nums) mp[i]++;
        int sum=0;
        for(int i=0;i<mp.size();i++){
            if(mp[i]==1) sum+=i;
        }
        return sum;
    }
};