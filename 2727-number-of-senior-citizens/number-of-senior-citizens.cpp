class Solution {
public:
    int countSeniors(vector<string>& details) {
        vector<string>ref;
        for(string & detail : details){
            ref.push_back(detail.substr(11,2));
        }
        int count=0;
        for(string &st : ref){
            if(stoi(st)>60) count++; 
        }
        return count;
    }
};