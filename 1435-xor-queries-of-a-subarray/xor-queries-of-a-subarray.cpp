class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        int k=queries.size();
        vector<int>x(n);
        vector<int>ans(k);
        x[0]=arr[0];
        for(int i=1;i<n;i++){
        x[i]=x[i-1] ^ arr[i];
        }
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]!=0){
                 ans[i]=x[queries[i][1]] ^ x[queries[i][0]-1];
            }
           else   ans[i]=x[queries[i][1]];
        }
        return ans;
    }
};