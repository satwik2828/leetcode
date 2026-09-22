class Solution {
public:
    void rec(int i,string &digits,string &k,unordered_map<int,string>&mp,vector<string>&ans){
        if(i==digits.size()) {
        ans.push_back(k);
        return;
        }
        int digit=digits[i]-'0';
        for(int l :mp[digit])
        {
            k.push_back(l);
            rec(i+1,digits,k,mp,ans);
            k.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string>mp;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        vector<string>ans;
        string k;
        rec(0,digits,k,mp,ans);
        return ans;
    }
};