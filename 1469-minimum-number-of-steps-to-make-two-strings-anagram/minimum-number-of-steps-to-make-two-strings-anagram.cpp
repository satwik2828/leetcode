class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>s1(26,0);
        vector<int>t1(26,0);
        for(char &ch : s){
            s1[ch-'a']++;
        }
        for(char &ch : t){
            t1[ch-'a']++;
        }
        int count=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]<t1[i]){
                count+=t1[i]-s1[i];
            }
        }
        return count;
    }
};