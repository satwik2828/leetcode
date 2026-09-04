class Solution {
public:
    int beautySum(string s) {
        int n=s.length(),sum=0;
        for(int i=0;i<n;i++){
            vector<int>freq(26,0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int maxi=INT_MIN,mini=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]!=0 && maxi<freq[k]) maxi=freq[k];
                    if(freq[k]!=0 && mini>freq[k]) mini=freq[k];
                }
                if(maxi!=mini)sum+=maxi-mini;
            }
            freq.clear();
        }
        return sum;
    }
};