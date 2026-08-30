class Solution {
public:
    int maxDepth(string s) {
    stack<char>st;
    int c=0,maxi=0;
    for(char ch:s){
        if(ch=='('){
            c++;
        }
        if(ch==')'){
            maxi=max(maxi,c);
            c--;
        }
    }
    return  maxi;
    }
};