class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum=0,prev=0;
        for(auto &i:bank){
            int cur=count(i.begin(),i.end(),'1');
            if(cur>0){
            sum+=prev*cur;
            prev=cur;
            }
        }
        return sum;
    }
};