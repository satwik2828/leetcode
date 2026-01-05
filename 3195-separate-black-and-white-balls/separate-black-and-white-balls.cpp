class Solution {
public:
    long long minimumSteps(string s) {
        int count=0;
        long long ocount=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='0') count++;
            else ocount+=count;
    }
        return ocount;
    }
};