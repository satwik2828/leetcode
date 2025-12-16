class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int count=0,x=0;;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                x++;
                if(x==0){
                    count++;
                }
            }
            else{
                x--;
                if(x==0){
                    count++;
                }
            }
        }
        return count;
    }
};