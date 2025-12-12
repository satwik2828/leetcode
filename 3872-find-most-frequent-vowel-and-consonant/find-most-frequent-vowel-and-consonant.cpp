class Solution {
public:
    int maxFreqSum(string s) {
     vector<int>mp(26,0);
     int vc=0,cc=0;
     for(char ch: s){
        mp[ch-'a']++;
     }
     for(int i=0;i<26;i++){
        if(i==0 ||i==4 ||i==8 || i==14 ||i==20){
            vc=max(vc,mp[i]);
        }
        else{
            cc=max(cc,mp[i]);
        }
     }
     return vc+cc;
    }
};