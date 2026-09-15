class Solution {
public:
    void rec(int i,int j,int n,string s,vector<string>&ans){
        if(i==n && j==n){
            ans.push_back(s);
            return;
        }
        if(i<n){
            s.push_back('(');
            rec(i+1,j,n,s,ans);
            s.pop_back();
        }
        
        if(i>j){
            s.push_back(')');
            rec(i,j+1,n,s,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s;
        rec(0,0,n,s,ans);
        return ans;
    }
};