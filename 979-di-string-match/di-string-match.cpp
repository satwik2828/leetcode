class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=0,k=0,d=s.length();
        vector<int>res(d+1,0);
        for(char ch : s){
            if(ch=='I') res[k++]=i++;
            else res[k++]=d--;
        }
        if(s[s.length()-1]=='D') res[k]=d--;
        else res[k]=i++;
        return res;
    }
};