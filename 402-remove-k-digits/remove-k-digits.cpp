class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        for(int i=0;i<num.size();i++){
            while(!s.empty() && k>0 && s.back()>num[i]){
                s.pop_back();
                k--;
            }
            s.push_back(num[i]);
        }
        while(k>0 && !s.empty()){
            s.pop_back();
            k--;
        }
        int i=0;
        while(!s.empty() && s[i]=='0'){
           i++;
        }
        s=s.substr(i);
        if(s.empty()) return "0";
        return s;
    }
};