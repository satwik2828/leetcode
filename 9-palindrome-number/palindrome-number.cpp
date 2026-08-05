class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int x1,d;
    long long sum=0;
    x1=x;
    while(x>0){
        d=x%10;
        sum=(sum*10)+d;
        x=x/10;
    }
    if (x1==sum){
        return true;
    }
    else{
        return false;
    }
    }
};