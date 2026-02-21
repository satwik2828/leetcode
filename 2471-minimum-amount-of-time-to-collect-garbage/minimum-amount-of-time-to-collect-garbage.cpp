class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = travel.size();
        vector<int>ps(n+1,0);
    for(int i=1;i<=n;i++) ps[i]=ps[i-1]+travel[i-1];
    int g=0,m=0,p=0,lg=0,lm=0,lp=0;
    for(int i=0;i<garbage.size();i++){
        for(int j=0;j<garbage[i].size();j++){
            if(garbage[i][j]=='G'){
                g++;
                lg=i;
            }
            else if(garbage[i][j]=='P'){
                p++;
                lp=i;
            }
            else if(garbage[i][j]=='M'){
                m++;
                lm=i;
            }
        }
    }
    return g+m+p+ps[lg]+ps[lm]+ps[lp];
    }
};