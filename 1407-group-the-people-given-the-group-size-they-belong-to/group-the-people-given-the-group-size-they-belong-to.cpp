class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
       map<int,vector<int>>mp;
       for(int i=0;i<groupSizes.size();i++){
        mp[groupSizes[i]].push_back(i);
       }
       vector<vector<int>> res;
        for(auto i : mp){
            vector<int>temp;
            for(int j=0;j<i.second.size();j++){
                if(temp.size()==i.first){
                    res.push_back(temp);
                    temp.clear();
                }
                temp.push_back(i.second[j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};