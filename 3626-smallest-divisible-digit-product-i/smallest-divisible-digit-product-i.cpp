class Solution {
public:
    int smallestNumber(int n, int t) {
        int curr=n;
         while(true){
        int  pro=1;
        while(curr>0){
            int digit=curr%10;
            pro*=digit;
            curr/=10;
        }
        if(pro%t==0) return n;
        else n++;
        curr = n;
        }
    }
};