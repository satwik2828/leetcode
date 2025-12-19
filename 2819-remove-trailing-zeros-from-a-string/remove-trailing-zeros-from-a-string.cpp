class Solution {
public:
    string removeTrailingZeros(string num) {
        int index;
        for(int i=0;i<num.length();i++){
            if(num[i]!='0'){
                index=i;
            }
        }
        string s="";
        for(int i=0;i<=index;i++){
            s+=num[i];
        }
        return s;
    }
};