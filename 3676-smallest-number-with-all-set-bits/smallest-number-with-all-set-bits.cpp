class Solution {
public:
    int smallestNumber(int n) {
        string s="";
        while(n){
            int y=n%2;
            if(y==0) y=1;
            s+=to_string(y);
            n/=2;
        }
        int ans=0,len=s.length(),x=stoi(s),k=1;
        while(len--){
            ans+=k*(x%10);
            k*=2;
            x/=10;
        }
        return ans;
    }
};