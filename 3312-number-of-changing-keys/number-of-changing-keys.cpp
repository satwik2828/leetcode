class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i+1]!=tolower(s[i]) && s[i+1]!=toupper(s[i])) count++; 
        }
        return count;
    }
};