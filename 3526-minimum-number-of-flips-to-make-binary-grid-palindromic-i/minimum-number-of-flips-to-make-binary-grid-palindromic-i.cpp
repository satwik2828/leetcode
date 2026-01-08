class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
     int count1=0,count2=0,m=grid.size(),n=grid[0].size();
     for(int i=0;i<m;i++){
        int l=0,r=n-1;
        while(l<r){
        if(grid[i][l]!=grid[i][r]) count1++;
        l++;
        r--;
        }
     }   
     for(int i=0;i<n;i++){
        int l=0,r=m-1;
        while(l<r){
        if(grid[l][i]!=grid[r][i]) count2++;
        l++;
        r--;
        }
     }
     return min(count1,count2);
    }
};