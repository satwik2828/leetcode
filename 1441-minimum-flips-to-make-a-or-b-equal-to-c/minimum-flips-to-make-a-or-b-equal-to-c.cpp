class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        int maxi=max({a,b,c});
      while(maxi){
        int k=a&1,l=b&1,m=c&1;
        if(m==0 && k==1 && l==1) ans+=2;
        if(m==1 && k==0 && l==0) ans+=1;
        if(m==0 && k==0 && l==1)  ans+=1;
        if(m==0 && k==1 && l==0)   ans+=1;
        c=c>>1;
        a=a>>1;
        b=b>>1; 
        maxi=maxi>>1;
        cout<<ans<<endl;
      }  
      return ans;
    }
};