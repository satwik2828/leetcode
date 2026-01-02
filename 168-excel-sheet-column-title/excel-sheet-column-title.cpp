class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber){
            columnNumber--;
            int digit=columnNumber%26;
            s+=digit+'A';
            columnNumber/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};