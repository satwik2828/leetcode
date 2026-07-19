class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
      int low=weights[0],high,sum=weights[0];
      for(int i=1;i<weights.size();i++){
        sum+=weights[i];
        low=max(low,weights[i]);
      }  
      high=sum;
      while(low<=high){
        int mid=low+(high-low)/2;
        int c=0,Days=0;
        for(int i=0;i<weights.size();i++){
            if(c+weights[i]<=mid){
                c+=weights[i];
            }
            else{
                Days+=1;
                c=weights[i];
            }
        }
        Days++;
        if(Days>days) low=mid+1;
        else high=mid-1;
      }
      return low;
    }
};