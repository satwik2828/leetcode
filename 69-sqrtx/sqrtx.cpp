class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int low=1,high=x-1,ans=1;
        while(low<=high){
            int mid=(low+high)>>1;
            if(mid<=x/mid) ans=max(ans,mid), low=mid+1;
            else high=mid-1;
            // cout<<mid<<" "<<ans<<endl;
        }
        return ans;
    }
};