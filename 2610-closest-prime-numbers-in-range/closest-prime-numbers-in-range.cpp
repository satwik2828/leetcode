class Solution {
public:
   vector<bool>primes;
   int n=1000000;
   void sieve(){
    primes.resize(n+1);
    for(int i=2;i<=n;i++) primes[i]=true;
    for(int i=2;i*i<=n;i++){
        for(int j=i*i;j<=n;j+=i){
            primes[j]=false;
        }
    }
   }
    vector<int> closestPrimes(int left, int right) {
        sieve();
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