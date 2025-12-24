class Solution {
public:
    int countDigits(int num) {
        int x=num,count=0;
        while(x>0){
            int digit=x%10;
            if(digit!=0 && num % digit==0) count++;
            x/=10;
        }
        return count;
    }
};