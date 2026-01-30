class Solution {
public:
    string sortSentence(string s) {
        int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ') count++;
    }
    vector<string>ans(count+2);
    string res,result="";
    stringstream ss(s);
    while(ss >> res){
        int len=res.length();
        int index = res[len-1]-'0';
        ans[index]=res.substr(0,len-1);
    }    
    for(int i=1;i<ans.size();i++){
       result+=ans[i];
       result+=" ";
    }
    result.pop_back();
    return result;
    }
};