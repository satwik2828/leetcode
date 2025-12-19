class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int>ref(26,0);
        for(char &ch:s){
            ref[ch-'a']=1;
        }
        int count=0;
        for(int &i:ref){
            if(i==1) count++;
        }
        return count;
    }
};