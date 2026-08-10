class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>a(n+1);
    for(int i=0;i<=n;i++){
    int count=0;
    int num=i;
    while(num>0){
        int digit=num%2;
        count+=digit;
        num/=2;
    }
    a[i]=count;
   }
   return a;
    }
};