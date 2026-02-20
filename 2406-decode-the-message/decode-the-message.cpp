class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_set<char>rd;
        string s="",last="",res="";
        for(char x : key){
            if(rd.insert(x).second){
            s+=x;
            }
        }
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ') last+=s[i];
        }
        char ch='a';
        unordered_map<char,char>ref(last.length());
        for(int i=0;i<last.length();i++){
            ref[last[i]]=i+ch;
        }
        for(char letter : message){
            if(letter==' ') res+=' ';
            else res+=ref[letter];
        }
        return res;
    }
};