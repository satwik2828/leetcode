class Solution {
public:
    int ftw(vector<int>a,int k,int idx){
        if(a.size()==1) return a[0];
        idx=(idx+k-1)%a.size();
        a.erase(a.begin()+idx);
        return ftw(a,k,idx);
    }
    int findTheWinner(int n, int k) {
        int idx=0;
        vector<int>ls;
        for(int i=1;i<=n;i++) ls.push_back(i);
        return ftw(ls,k,idx);
    }
};