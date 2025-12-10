class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.length();
        string res(n,' ');
        for(int i=0;i<indices.size();i++){
            res[indices[i]]=s[i];
        }
        return res; 
    }
};