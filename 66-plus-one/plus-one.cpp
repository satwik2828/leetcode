class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i=digits.size()-1,n=digits.size();
        while(n){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i]=0;
            }
            i--;
            n--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};