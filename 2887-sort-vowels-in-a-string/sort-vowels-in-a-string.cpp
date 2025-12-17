class Solution {
public:
    bool isvowel(char ch){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<char>temp;
        for(int i=0;i<s.length();i++){
                if(isvowel(s[i])){
                temp.push_back(s[i]);
                }
        }
        sort(temp.begin(),temp.end());
        int k=0;
        for(int i=0;i<s.length();i++){
             if(isvowel(s[i])){
                s[i]=temp[k++];
            }
        }
        return s;
    }
};