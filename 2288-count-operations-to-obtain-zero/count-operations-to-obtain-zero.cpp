class Solution {
public:
    long countOperations(int num1, int num2) {
        long count=0;
        while(num1 && num2){
            if(num1<=num2){
                num2=num2-num1;
            }
            else{
                num1=num1-num2;
            }
            count++;
        }
        return count;
    }
};