class Solution {
public:
    char recur(string ch,int k,int count){
        for(int i=0;i<count;i++){
            ch.push_back(ch[i]+1);
        }
        if(count>k){
            return ch[k-1];
        }
        return recur(ch,k,count*2);
    }
    char kthCharacter(int k) {
        string ch="a";
        int count=1;
      return recur(ch,k,count);
    }
};