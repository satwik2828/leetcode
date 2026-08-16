class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        sort(strs.begin(),strs.end());
        int k=0,flag=1;
        while(flag && k<strs[0].size()){
        for(int i=1;i<strs.size();i++){
            if(strs[i][k]!=strs[0][k]){
                flag=0;
                break;
            }
        }
        if(flag) ans+=strs[0][k];
        k++;
        }
        return ans;
    }
};