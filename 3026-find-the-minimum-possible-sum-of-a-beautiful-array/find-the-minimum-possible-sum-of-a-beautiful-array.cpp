class Solution {
public:
    int minimumPossibleSum(int n, int target) {
        long long k=1,sum=0,l=target/2,a=1e9+7;
        while(k<=l && k<=n){
            sum+=k;
            k++;
        }
        cout<<k<<endl;
        int m=n-k+1;
        cout<<m<<" "<<sum<<endl;
        sum+=(1ll*(1ll*target*2+(m-1))*m/2)%a;
        // cout<<(m%a*(m%a-1)/2)%a<<endl;
        return sum%(a);
    }
};