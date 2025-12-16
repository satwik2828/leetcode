class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum=0,prev=0;
        for(string &i:bank){
            int devices=count(i.begin(),i.end(),'1');
            if(devices>0){
            sum+=prev*devices;
            prev=devices;
            }
        }
        return sum;
    }
};