class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size()-1;i++){
            for(int j=i+1;j<words.size();j++){
                string x=words[j];
                reverse(x.begin(),x.end());
                if(words[i]==x) count++;
            }
        }
        return count;
    }
};