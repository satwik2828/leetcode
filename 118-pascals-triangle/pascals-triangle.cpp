class Solution {
public:
    vector<int>grow(int r){
        vector<int>answerrow;
        long long a=1;
        answerrow.push_back(1);
        for(int col=1;col<r;col++){
            a*=(r-col);
            a/=col;
            answerrow.push_back(a);
        }
        return answerrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(grow(i));
        }
        return ans;
    }
};