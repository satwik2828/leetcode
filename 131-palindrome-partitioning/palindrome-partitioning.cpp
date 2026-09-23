class Solution {
public:
    bool ispalindrome(string &str){
        int i=0,j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void rec(int i,string &s,vector<string>&k,vector<vector<string>>&ans){
        if(i>=s.size()){
            ans.push_back(k);
            return;
        }
        string temp="";
        for(int l=i;l<s.size();l++){
            temp+=s[l];
            if(ispalindrome(temp)){
                k.push_back(temp);
                rec(l+1,s,k,ans);
                k.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n=s.length();
        vector<vector<string>>ans;
        vector<string>k;
        rec(0,s,k,ans);
        return ans;
    }
};