class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,n=mat.size(),j=n-1;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            sum+=mat[i][j--];
        }
        if(n%2!=0) sum-=mat[n/2][n/2];
        return sum;
    }
};