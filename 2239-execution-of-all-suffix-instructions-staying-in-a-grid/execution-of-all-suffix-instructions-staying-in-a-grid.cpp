class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>ans;
        for(int i=0;i<s.length();i++){
            int steps=0;
            int j=startPos[0],k=startPos[1];
            for(int l=i;l<s.length();l++){
                if(s[l]=='U')
                {
                    if(j>0){
                        j--;
                        steps++;
                    }
                    else{
                        break;
                    }
                }
                else if(s[l]=='D'){
                    if(j<n-1){
                        j++;
                        steps++;
                    }
                    else{
                        break;
                    }
                }
                else if(s[l]=='L'){
                    if(k>0){
                        k--;
                        steps++;
                    }
                    else{
                        break;
                    }
                }
                else {
                    if(k<n-1){
                        k++;
                        steps++;
                    }
                    else{
                        break;
                    }
                }
            }
            ans.push_back(steps);
        }
        return ans;
    }
};