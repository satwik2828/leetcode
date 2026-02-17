class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>rowsum;
        vector<int>columnsum;
        int n=grid.size();
        for(int i=0;i<n;i++){
            int rs=0,cs=0;
            for(int j=0;j<n;j++){
                rs=max(rs,grid[i][j]);
                cs=max(cs,grid[j][i]);
            }
            rowsum.push_back(rs);
            columnsum.push_back(cs);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=rowsum[i] || grid[i][j]!=columnsum[j]){
                    sum+=min(rowsum[i],columnsum[j])-grid[i][j];
                }
            }
        }
        return sum;
    }
};