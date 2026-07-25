class Solution {
public:
    int maxProduct(int n) {
        vector<int>a;
        while(n){
            int digit=n%10;
            a.push_back(digit);
            n/=10;
        }
        sort(a.begin(),a.end());
        int k=a.size();
        return a[k-2]*a[k-1];
    }
};