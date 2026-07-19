class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end()),high=*max_element(bloomDay.begin(),bloomDay.end()),ans=-1;
        if((long long)m*k>bloomDay.size()) return -1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int c=0,total=0;
            for(int i=0;i<bloomDay.size();i++){
                if(bloomDay[i]<=mid) c++;
                else {
                    total+=c/k;
                    c=0;
                }
            }
            total+=c/k;
            if(total>=m){
                ans=mid;
                high=mid-1;
            }
            else {
               low=mid+1; 
            }
        }
        return ans;
    }
};