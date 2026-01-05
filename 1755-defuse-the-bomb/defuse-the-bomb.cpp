class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>res(n,0);
        if(k==0) return res;
        for(int i=0;i<n;i++){
            code.push_back(code[i]);
        }
        int l,r,sum=0;
        if(k>0){
           l=1,r=k;
        }
        else if(k<0){
          l=n+k,r=n-1;          
            }
            for(int i=l;i<=r;i++) sum+=code[i];
            for(int i=0;i<n;i++){
                res[i]=sum;
                sum-=code[l++];
                sum+=code[++r];
            }
            return res;
    }
};