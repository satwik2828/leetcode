class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size()/3;
        int k=2,sum=0;
        while(n--){
            sum+=piles[piles.size()-k];
            k+=2;
        }
        return sum;
    }
};