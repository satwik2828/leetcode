class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum=0,prev=0;
        for(int i=0;i<bank.size();i++){
            int devices=count(bank[i].begin(),bank[i].end(),'1');
            if(devices>0){
            sum+=prev*devices;
            prev=devices;
            }
        }
        return sum;
    }
};