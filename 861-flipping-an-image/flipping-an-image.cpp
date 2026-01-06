class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        vector<vector<int>>ans(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=n-1;j>=0;j--){
                if(image[i][j]==0) ans[i][k]=1;
                k++;
            }
        }
        return ans;
    }
};