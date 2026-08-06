class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mp;
        int n=A.size(),count=0;
        vector<int>C(n);
        for(int i=0;i<n;i++){
            mp[A[i]]++;
            mp[B[i]]++;
            for(auto k:mp){
                if(k.second==2) count++;
            }
            C[i]=count;
            count=0;
        }
        return C;
    }
};