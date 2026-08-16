class Solution {
public:
    string reverseWords(string s) {
       string  ans;
       int n=s.length();
       int end=n-1;
       while(end>=0 && s[end]==' '){
            end--;
        }
          int i=end;
    while(end>=0){
        i=end;
        while(i>=0 && s[i]!=' '){
            i--;
        }
         ans+=s.substr(i+1,end-i);
         end=i;
         while(end>=0 && s[end]==' '){
            end--;
        }
        if(end>=0) ans+=' ';
        //  cout<<s.substr(i+1,end-i)<<endl;
        //  if(i>0) ans+=' ';
    }
    return ans;
    }
};