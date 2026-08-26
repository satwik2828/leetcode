class Solution {
public:
    vector<bool>primes;
    void seive(int k){
        primes.resize(k+1);
        for(int i=2;i<=k;i++) primes[i]=true;
        for(int i=2;i*i<=k;i++){
            for(int j=i*i;j<=k;j+=i){
                primes[j]=false;
            }
        }
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        seive(maxi);
        vector<int>temp;
        for(int i=0;i<nums.size();i++) if(primes[nums[i]]) temp.push_back(i);
        int mini=*min_element(temp.begin(),temp.end());
        int Maxi=*max_element(temp.begin(),temp.end());
        return Maxi-mini;
    }
};