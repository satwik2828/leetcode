class Solution {
public:
    int minOperations(int n) {
        //int sum=0;
    // vector<long>a(100001,0);
    // for(long i=0;i<n/2;i++){

    // }
    int x=n/2,k=x*x;
    if(n%2!=0){
    return (n*n - 2*k - n)/2;
    }
     return (n*n - 2*k)/2;
    }
};