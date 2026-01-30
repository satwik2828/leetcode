class Solution {
public:
    string sortSentence(string s) {
    vector<string>ref(10);
    string result,st="";
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            ref[s[i]-'0']=st+" ";
            st="";
            i++;
        }
        else{
            st+=s[i];
        }
    }
    for(auto &i : ref){
        result+=i;
    }
    result.pop_back();
    return result;
    }
};