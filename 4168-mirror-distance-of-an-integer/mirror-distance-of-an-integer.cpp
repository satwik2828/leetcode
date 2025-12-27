class Solution {
public:
    int mirrorDistance(int n) {
        int m=n,new_num=0;
        while(m){
            int digit=m%10;
            new_num=new_num*10+digit;
            m/=10;
        }
        return abs(new_num-n);
    }
};