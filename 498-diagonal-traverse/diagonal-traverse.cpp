class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>>mp;
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>temp;
        for(int i=0;i<=(m+n-2);i++){
            if(i&1){
                for(int j=0;j<mp[i].size();j++) temp.push_back(mp[i][j]);
            }
            else{
               for(int j=mp[i].size()-1;j>=0;j--) temp.push_back(mp[i][j]);
 
            }
        }
        return temp;
    }
};