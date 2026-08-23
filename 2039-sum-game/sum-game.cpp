class Solution {
public:
    bool sumGame(string num) {
        int nq=0,n=num.length(),sum=0;
        for(int i=0;i<n/2;i++){
            if(num[i]!='?')sum+=num[i]-'0';
            if(num[n-i-1]!='?')sum-=num[n-i-1]-'0';
            if(num[i]=='?') nq++;
            if(num[n-i-1]=='?') nq--;
        }
        if(nq&1) return true;
        return sum!=-9*nq/2;
    }
};