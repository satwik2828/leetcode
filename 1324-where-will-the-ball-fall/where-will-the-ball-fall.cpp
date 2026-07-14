class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<int>ans;
        for(int k=0;k<m;k++){
            int i=0,j=k;
            while(i<n){
                if(grid[i][j]==1){
                    if( j<m-1 and grid[i][j+1]==1){
                        i++;
                        j++;
                    } 
                    else {
                        j=-1;
                        break;
                    }
                }
                else if(grid[i][j]==-1){
                    if(j>0 and grid[i][j-1]==-1){
                        i++;
                        j--;
                    }
                    else {
                        j=-1;
                        break;
                    }
                }
                else{
                    j=-1;
                    break;
                }
        }
        ans.push_back(j);
        }
        return ans;
    }
};