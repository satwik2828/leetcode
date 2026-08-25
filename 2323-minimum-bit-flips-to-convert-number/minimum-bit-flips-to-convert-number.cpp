class Solution {
public:
    int minBitFlips(int start, int goal) {
        int maxi=max(start,goal);
        int flips=0;
        while(maxi){
            int a=start&1,b=goal&1;
            if(a!=b) flips++;
            start=start>>1;
            goal=goal>>1;
            maxi>>=1;
        }
        return flips;
    }
};