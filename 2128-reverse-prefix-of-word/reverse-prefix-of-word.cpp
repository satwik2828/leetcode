class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char>st;
        int count=0,flag=0;
        for(char &character : word){
            st.push(character);
            count++;
            if(character==ch) {
                flag=1;
                break;
            }
        }
        if(flag==0) return word;
        string s;
        int c=count;
        while(count--){
            s.push_back(st.top());
            st.pop();
        }
        for(int i=c;i<word.length();i++){
            s.push_back(word[i]);
        }
        return s;
    }
};