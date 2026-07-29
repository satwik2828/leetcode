class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int>freq(32);
        for(int l:nums){
            int k=1;
            for(int i=0;i<32;i++){
                if(k&l) freq[i]++;
                k<<=1;
            }
        } 
        int ans=0;
        for(int i=0;i<32;i++){
            if(freq[i]%3!=0) {
                int k= 1<<i;
                ans|=k;
            }
        }
        return ans;
    }
};