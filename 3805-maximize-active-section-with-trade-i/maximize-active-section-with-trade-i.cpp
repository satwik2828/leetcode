class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();
        vector<int>a;
        int s_count=0,count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') s_count++;
        }
        if(s.size()<=2 || s_count==n) return s_count;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count++;
            }
            else if(count>0){
                a.push_back(count);
                count=0;
            }
        }
        if(count>0) a.push_back(count);
        int c=0;
        for(int i=0;i<a.size()-1;i++){
            c=max(c,a[i]+a[i+1]);
        }
        return s_count+c;
    }
};