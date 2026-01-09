class Solution {
public:
    bool ispal(string x){
        int l=x.length();
        for(int i=0;i<l/2;i++){
            if(x[i]!=x[l-i-1]) return false;
        }
        return true;
    }
    int countSubstrings(string s) {
        int n=s.length(),count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispal(s.substr(i,j-i+1))) count++;
            }
        }
        return count;
    }
};