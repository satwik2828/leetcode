class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0,count=0,mini=100000;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                sum+=abs(matrix[i][j]);
                if(mini>abs(matrix[i][j])){
                    mini=abs(matrix[i][j]);
                }
                if(matrix[i][j]<0) count++;
            }
        }
        if(count&1) return sum-(2*mini);
        else return sum;
    }
};