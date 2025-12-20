class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count=0,k=strs[0].size(),l=strs.size();
        for(int i=0;i<k;i++){
            for(int j=0;j<l-1;j++){
                if(strs[j][i]>strs[j+1][i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};