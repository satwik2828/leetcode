class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>s1(26,0);
        for(char ch : s){
            s1[ch-'a']++;
        }
        for(char ch : t){
            s1[ch-'a']--;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(s1[i]<0){
                count-=s1[i];
            }
        }
        return count;
    }
};