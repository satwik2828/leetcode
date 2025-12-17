class Solution {
public:
    int countAsterisks(string s) {
        string res;
        for(char ch : s){
            if(!isalpha(ch)){
                res.push_back(ch);
            }
        }
        int count=0,flag=0;;
        for(int i=0;i<res.length();i++){
            if(flag%2==0){
            if(res[i]=='*') count++;
           }
           if(res[i]=='|'){
            flag++;
           }
        }
        return count;
    }
};