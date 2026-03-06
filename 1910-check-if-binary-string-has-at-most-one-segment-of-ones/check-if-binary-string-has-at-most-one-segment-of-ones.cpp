class Solution {
public:
    bool checkOnesSegment(string s) {
        string s1=s;
        sort(s.rbegin(),s.rend());
       return s==s1;
    }
};