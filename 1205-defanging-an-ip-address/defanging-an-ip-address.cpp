class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        res.reserve(address.size()+6);
        for(char i=0;i<address.length();i++){
            if(address[i]=='.'){
              res+="[.]";
            }
            else res+=address[i];
        }
        return res;
    }
};