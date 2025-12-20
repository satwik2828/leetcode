class Solution {
public:
    int partitionString(string s) {
        string temp="";
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(!temp.contains(s[i]))
            {
                temp+=s[i];
            }
            else
            {
                count++;
                temp="";
                temp+=s[i];
            }
        }
        return count+1;
    }
};