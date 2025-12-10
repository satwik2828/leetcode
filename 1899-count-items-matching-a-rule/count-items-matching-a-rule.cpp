class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        vector<string>type;
        vector<string>color;
        vector<string>name;
        int count=0;
        for(auto &i:items){
            type.push_back(i[0]);
            color.push_back(i[1]);
            name.push_back(i[2]);
        }
        if(ruleKey=="color"){
        for(int i=0;i<color.size();i++){
            if(ruleValue==color[i]) count++;
        }
        }
        if(ruleKey=="type"){
        for(int i=0;i<type.size();i++){
            if(ruleValue==type[i]) count++;
        }
        }
        if(ruleKey=="name"){
        for(int i=0;i<name.size();i++){
            if(ruleValue==name[i]) count++;
        }
        }
        return count;
    }
};