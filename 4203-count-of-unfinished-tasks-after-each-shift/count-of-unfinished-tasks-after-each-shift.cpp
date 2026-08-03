class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n=tasks.size(),m=shifts.size();
        vector<long long>pf(n);
        pf[0]=tasks[0];
        for(int i=1;i<n;i++) pf[i]=pf[i-1]+tasks[i];
        long long sum=0,d=pf[n-1];
        vector<int>ans;
        for(int i=0;i<m;i++){
            sum+=shifts[i];
            if(sum>=d){
                ans.push_back(0);
                sum=0;
                continue;
            }
            auto it=upper_bound(pf.begin(),pf.end(),sum);
            int idx=it-pf.begin();
            ans.push_back(n-idx);
        }
        return ans;
    }
};