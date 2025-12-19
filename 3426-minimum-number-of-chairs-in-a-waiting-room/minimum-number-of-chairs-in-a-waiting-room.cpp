class Solution {
public:
    int minimumChairs(string s) {
        int count=0,maxi=0;
        for(char ch: s){
            if(ch=='E') count++;
            else count--;
            maxi=max(maxi,count);
        }
        return maxi;
    }
};