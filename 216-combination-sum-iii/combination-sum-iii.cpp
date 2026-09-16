class Solution {
public:
    void rec(int i,vector<int>&temp,vector<vector<int>>&ans,int k,int n){
        if(i>10) return;
        if(k==0 && n==0){
            ans.push_back(temp);
            return;
        }
        if(k==0) return;
        temp.push_back(i);
        if(i<=n)rec(i+1,temp,ans,k-1,n-i);
        // cout<<i<<" "<<k<<" "<<n<<endl;
        temp.pop_back();
         if(i<=n)rec(i+1,temp,ans,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
      vector<vector<int>>ans;
      vector<int>temp;
        rec(1,temp,ans,k,n);
        return ans;
    }
};