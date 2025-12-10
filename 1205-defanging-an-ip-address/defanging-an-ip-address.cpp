class Solution {
public:
    string defangIPaddr(string address) {
        string res="";
        int index=0;
        while(index<address.length()){
            if(address[index]=='.'){
                res+="[.]";
                index++;
            }
            else{
                res+=address[index];
                index++;
            }
        }
        return res;
    }
};