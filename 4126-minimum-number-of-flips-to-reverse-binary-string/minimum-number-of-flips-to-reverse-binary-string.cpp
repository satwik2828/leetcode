class Solution {
public:
    int minimumFlips(int n) {
        string s;
        while(n){
            s.push_back(n%2);
            n/=2;
        }
        string t=s;
        int count=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]) count++;
        }
        return count;
    }
};