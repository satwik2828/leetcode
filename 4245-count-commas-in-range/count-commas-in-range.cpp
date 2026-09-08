class Solution {
public:
    int countCommas(int n) {
        // int k=log10(n)+1,c=0;
        // if(k>=4) c+=(n-999);
        // return c;
        if(n<1000) return 0;
        return (n-999);
    }
};