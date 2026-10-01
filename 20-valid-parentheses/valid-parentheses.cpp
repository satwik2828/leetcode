class Solution {
public:
    bool isValid(string s) {
        int n=s.length(),i=0;
        stack<char>st;
        while(i<n){
            if(!st.empty()&& (st.top()=='(' && s[i]==')')) st.pop();
            else if(!st.empty()&& (st.top()=='[' && s[i]==']')) st.pop();
            else if(!st.empty()&& (st.top()=='{' && s[i]=='}')) st.pop();
            else st.push(s[i]);
            i++;
        }
        return st.size()==0;
    }
};