class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int setcount=count(s.begin(),s.end(),'1');
        string res="";
            for(int i=0;i<setcount-1;i++){
                res+='1';
            }
            for(int i=setcount-1;i<s.length()-1;i++){
                res+='0';
            }
            res+='1';
            return res;
    }
};