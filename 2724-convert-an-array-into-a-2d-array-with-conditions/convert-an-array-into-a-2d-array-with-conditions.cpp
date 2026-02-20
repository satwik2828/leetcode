class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
       map<int,int>mp;
       for(int i:nums){
        mp[i]++;
       }
       vector<vector<int>>ans;
       while(true){
        vector<int>temp;
        bool added=0;
       for(auto & i: mp){
        if(i.second>0){ 
           temp.push_back(i.first);
            i.second--;
            added=1;
        }
       }
        if(added==0) break;
       ans.push_back(temp);
       }
    return ans;
    }
};