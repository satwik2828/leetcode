class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1 || numRows>=n) return s;
        int t=2*(numRows-1);
        vector<vector<char>>mat(numRows);
            for(int i=0;i<n;i++){
                int r=i%t;
                if(r>numRows-1) r=t-r;
                mat[r].push_back(s[i]);
            }
        s="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<mat[i].size();j++){
                s+=mat[i][j];
            }
        }
        return s;
    }
};