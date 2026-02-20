class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>comp;
        int count=0;
        for(auto & i: heights) comp.push_back(i);
        sort(comp.begin(),comp.end());
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=comp[i]) count++;
        }
        return count;
    }
};