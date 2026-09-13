class Solution {
public:
    int solve(string s,int i,int sign,long long ans)
    {
        if(i>=s.size() || s[i]<'0' || s[i]>'9') return ans*sign;
        int digit=s[i]-'0';
        if(ans>(INT_MAX-digit)/10){
            if(sign==1)   return INT_MAX;
            else return INT_MIN;
        }
        ans=ans*10+digit;
        return solve(s,i+1,sign,ans);
    }
    int myAtoi(string s) {
        int n=s.length();
        int i=0,sign=1;
        long long ans=0;
        while(i<n&& s[i]==' ') i++;
        if(i<n &&(s[i]=='+' || s[i]=='-')){
            if(s[i]=='-') sign=-1;
            i++;
        }
       ans= solve(s,i,sign,0);
       return ans;
    }
};