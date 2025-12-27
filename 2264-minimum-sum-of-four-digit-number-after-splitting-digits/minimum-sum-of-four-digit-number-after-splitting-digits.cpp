class Solution {
public:
    int minimumSum(int num) {
        vector<int>ref(4,0);
        int k=0;
        while(num){
            ref[k++]=num%10;
            num/=10;
        }
        sort(ref.begin(),ref.end());
        return ref[2]+ref[3]+10*(ref[0]+ref[1]);
    }
};