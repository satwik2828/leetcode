class Solution {
public:
    int maxFreqSum(string s) {
     map<char,int>mp;
     int vc=0,cc=0;
     for(char ch: s){
        mp[ch]++;
     }
     for(char ch='a';ch<='z';ch++){
        if(ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vc=max(vc,mp[ch]);
        }
        else{
            cout<<ch<<" "<<mp[ch]<<" "<<cc<<endl;
            cc=max(cc,mp[ch]);
        }
     }
     return vc+cc;
    }
};