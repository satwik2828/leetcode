class Solution {
public:
    int max_in_col(vector<vector<int>>&a,int k){
        int n=a.size(),maxi=-1,idx=-1;
        for(int i=0;i<n;i++){
            if(maxi<a[i][k]){
                maxi=a[i][k];
                idx=i;
            }
        }
        return idx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=(low+high)>>1;
            int row=max_in_col(mat,mid);
            int left=mid-1>=0?mat[row][mid-1]:-1;
            int right=mid+1<m?mat[row][mid+1]:-1;
            if(left<mat[row][mid] && right<mat[row][mid]) return {row,mid};
            else if(left>mat[row][mid]) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};