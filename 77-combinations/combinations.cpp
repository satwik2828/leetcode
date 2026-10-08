class Solution {
public:
    void rec(int i,int &k,vector<int>&arr,vector<int>&a,vector<vector<int>>&ans){
        if(i==arr.size()){
            if(a.size()==k && !a.empty())ans.push_back(a);
            return;
        }
        a.push_back(arr[i]);
        rec(i+1,k,arr,a,ans);
        a.pop_back();
        rec(i+1,k,arr,a,ans);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back(i+1);
        }
        vector<int>a;
        vector<vector<int>>ans;
        rec(0,k,arr,a,ans);
        return ans;
    }
};