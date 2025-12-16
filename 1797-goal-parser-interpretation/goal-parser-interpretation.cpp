class Solution {
public:
    string interpret(string command) {
        string s="";
        for(int i=0;i<command.length();i++){
            if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')') s+="al";
            else if(command[i]=='(' && command[i+1]==')') s+='o';
            else if(command[i]=='G') s+='G';
        }
        return s;
    }
};