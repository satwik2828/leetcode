class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<int,int>a;
      for(int i=0;i<s.length();i++){
        a[s[i]]++;
      }  
    for(int i=0;i<t.length();i++){
        a[t[i]]--;
    }  
    for(auto i :a){
        if(i.second!=0) return false;
    }
    return true;
    }
};