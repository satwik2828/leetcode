class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<int,char>mp;
        char ch='a';
        for(int i=0;i<key.length();i++){
            if(key[i]!= ' ' && mp[key[i]-'a']==0)  mp[key[i]-'a']=ch++;
        }
        string res="";
        for(char l : message){
            if(l==' ') res+=' ';
            else res+=mp[l-'a'];
        }
        return res;
    }
};