class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int ocount=0,zcount=0,count=0,n=s.length();
        for(int i=0;i<n;i++){
            ocount=0,zcount=0;
            for(int j=i;j<n;j++){
                if(s[j]=='1') ocount++;
                else zcount++;
                if(ocount<=k || zcount<=k) count++;
            }
        }
        return  count;
    }
};