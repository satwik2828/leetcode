class Solution {
public:
    string operation(string a){
        string x;
        for(int i=0;i<a.length()-1;i++){
            int res=((a[i]-'0')+(a[i+1]-'0'))%10;
            x.push_back(res+'0');
        }
        return x;
    }
    bool hasSameDigits(string s) {
        string st=s;
     while(st.length()>2){
        st=operation(st);
     }   
     return st[0]==st[1];
    }
};