class Solution {
public:
    int myAtoi(string s) {
        string number="";
        char sign='+';
        int ncount=0,pcount=0;
        int i=0,flag=0,n=s.length();
        while(i<n){
            if(isalpha(s[i])) return 0;
            if(s[i]=='.') break;
            if(s[i]=='+' && flag!=1) {
                pcount++;
                if(i<n-1 && s[i+1]==' ') return 0; 
            }
            if(s[i]=='-' && flag!=1) {
                ncount++;
                if(i<n-1 && s[i+1]==' ') return 0; 
            }
            if(isdigit(s[i])){
                flag=1;
                while(i<n && isdigit(s[i])){
                    number+=s[i];
                    i++;
                }
                break;
            }
            i++;
        }
        // cout<<number<<" "<<pcount<<" "<<ncount<<endl;
        int f=0;
        if(ncount==1 && pcount==0) {
            sign='-';
            f=1;
        }
        if(pcount==1 && ncount==0){
             sign='+';
             f=1;
        }
        if((ncount>0 || pcount>0) && ncount-pcount!=1 && f==0) return 0;
        int t=0;
        while(t<number.size() && number[t]=='0'){
            t++;
        }
        int l=number.size()-t;
        // cout<<l<<endl;
        if(sign=='+' && l>10) return INT_MAX;
        if(sign=='-'&& l>10) return INT_MIN;
        long long ans=0;
        long long k=1;
        for(int i=number.size()-1;i>=t;i--){
            ans+=(number[i]-'0')*k;
            k*=10;
        }
        // cout<<ans;
        if(sign=='+' && ans>=INT_MAX) ans=INT_MAX;
        if(sign=='-' && -ans<=INT_MIN) ans=INT_MIN;
        if(sign=='-') ans*=-1;
        return (int)ans;
    }
};