class Solution {
public:
    int reverseDegree(string s) {
        vector<int>v(27,0);
        int n=v.size();
        for(int i=1;i<n;i++){
            v[i]=i;
        }
        int sum=0;
        for(int i=0;i<s.length();i++){
            sum+=(i+1)*(n-v[s[i]-'a']-1);
            cout<<sum<<endl;
        }
    return sum;
    }
};