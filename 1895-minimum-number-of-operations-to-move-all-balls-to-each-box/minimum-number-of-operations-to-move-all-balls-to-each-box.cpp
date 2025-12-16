class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int>res(n);
        int moves=0,balls=0;
        for(int i=0;i<n;i++){
            res[i]+=moves;
            if(boxes[i]=='1') balls++;
            moves+=balls;
        }
         moves=0,balls=0;
         for(int i=n-1;i>=0;i--){
            res[i]+=moves;
            if(boxes[i]=='1') balls++;
            moves+=balls;
        }
        return res;
    }
};