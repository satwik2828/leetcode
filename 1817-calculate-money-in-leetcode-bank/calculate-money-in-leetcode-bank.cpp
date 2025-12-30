class Solution {
public:
    int totalMoney(int n) {
       int total=0,k=1,count=0;
       while(n>0){
        total+=k++;
        count++;
        if(count%7==0) k=count/7 + 1;
        n--;
       } 
       return total;
    }
};