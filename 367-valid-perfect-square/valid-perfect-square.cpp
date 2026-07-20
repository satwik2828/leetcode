class Solution {
public:
    bool isPerfectSquare(int num) {
        int low=1,high=num;
        while(low<=high){
            int mid=low+(high-low)/2;
            double k=num/(double)mid;
            if(k==(double)mid) return true;
            else if(k>(double)mid) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};