class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       int m=grid.size();
       int n=grid[0].size();
       vector<vector<int>>ans(m,vector<int>(n,0));
       for(int i=0;i<m;i++)
       {
        for(int j=0;j<n;j++){
            int l=(i+(j+k)/n)%m,t=(j+k)%n;
        ans[l][t]=grid[i][j];
        }
       } 
       return ans;
    }
};