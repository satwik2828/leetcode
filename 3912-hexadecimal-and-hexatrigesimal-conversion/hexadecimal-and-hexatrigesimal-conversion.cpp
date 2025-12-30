class Solution {
public:
    string hexaconversion(long long a,long long b){
        string s1="",s2="";
        char ch='A';
        while(a){
            int digit=a%16;
            if(digit>9){
                digit-=9;
                s1+=ch+digit-1;
            }
            else{
            s1+=to_string(digit);
            }
            a/=16;
        }
        reverse(s1.begin(),s1.end());
        while(b){
            int digi=b%36;
            if(digi>9) {
                digi-=9;
                s2+=ch+digi-1;
            }
            else{
            s2+=to_string(digi);
            }
            b/=36;
        }
        reverse(s2.begin(),s2.end());
        return s1+s2;
    }
    string concatHex36(int n) {
        long long x=n*n;
        long long y=n*n*n;
        return hexaconversion(x,y);
    }
};