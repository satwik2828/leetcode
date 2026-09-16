class Solution {
public:
    vector<vector<int>>ans;
    void rec(int i,vector<int>&temp,vector<int>&candidates,int target){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(candidates[i]<=target){
            temp.push_back(candidates[i]);
            rec(i,temp,candidates,target-candidates[i]);
            temp.pop_back();
        }
        rec(i+1,temp,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        rec(0,temp,candidates,target);
        return ans;
    }
};