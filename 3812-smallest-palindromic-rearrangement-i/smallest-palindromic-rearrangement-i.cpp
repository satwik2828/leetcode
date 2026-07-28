class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        if(n==1) return s;
        int k=n/2;
        sort(s.begin(),s.begin()+k);
        cout<<s<<endl;
        if(n%2) k+=1;
        sort(s.begin()+k,s.end(),greater<char>());
        return s;
    }
};