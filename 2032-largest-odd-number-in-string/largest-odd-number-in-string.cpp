class Solution {
public:
    string largestOddNumber(string num) {
    string ans;
    int n=num.size(),idx=-1;
    for(int i=0;i<n;i++){
        int k=num[i]-'0';
        if(k&1) idx=i;
    }
    ans=num.substr(0,idx+1);
    return ans;
    }
};