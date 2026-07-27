class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int>a;
        for(char ch : magazine){
            a[ch]++;
        }
        for(char ch : ransomNote){
            if(a[ch]==0) return false;
            a[ch]--;
        }
       return true;
    }
};