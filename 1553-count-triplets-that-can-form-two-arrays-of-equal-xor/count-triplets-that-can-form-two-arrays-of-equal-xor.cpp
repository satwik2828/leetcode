class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int ref=arr[i];
            for(int j=i+1;j<n;j++){
                ref=ref^arr[j];
                if(ref==0) sum+=j-i;
            }
            cout<<sum<<endl;
        }
        return sum;
    }
};