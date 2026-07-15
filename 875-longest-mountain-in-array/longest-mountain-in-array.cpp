class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size(),flag=0,maxi=0,c=1;
        for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            if(flag==0){
                flag=1;
                c=2;
            }
            else if(flag==1){
                c++;
            }
            else{
            flag=1;
            c=2;
            }
        }
        else if(arr[i]>arr[i+1]){
            if(flag==1){
                flag=2;
                c++;
                maxi=max(maxi,c);
            }
            else if(flag==2){
                c++;
                maxi=max(maxi,c);
            }
            else{
                c=1;
            }
        }
        else{
            flag=0;
            c=1;
        }
        }
        return maxi;
    }
};