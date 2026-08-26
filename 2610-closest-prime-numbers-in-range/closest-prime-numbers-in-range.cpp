class Solution {
public:
   vector<bool>primes;
   void sieve(int right){
    primes.resize(right+1);
    for(int i=2;i<=right;i++) primes[i]=true;
    for(int i=2;i*i<=right;i++){
        for(int j=i*i;j<=right;j+=i){
            primes[j]=false;
        }
    }
   }
    vector<int> closestPrimes(int left, int right) {
        sieve(right);
        int mini=INT_MAX;
        vector<int>ref;
        for(int i=left;i<=right;i++){
            if(primes[i]) ref.push_back(i);
        }
        int x=-1,y=-1;
        if(ref.size()<2) return {x,y};
        for(int i=0;i<ref.size()-1;i++){
            if(ref[i+1]-ref[i]<mini){
                mini=ref[i+1]-ref[i];
                y=ref[i+1];
                x=ref[i];
            }
        }
        return {x,y};
    }
};