class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0,diff=0;
        for(int i=0;i<gain.size();i++){
            diff+=gain[i];
            maxi=max(maxi,diff);
        }
        return maxi;
    }
};