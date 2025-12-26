class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0,n=arr.size();
        for(int i=0;i<n;i++){
            int temp_sum=0;
            for(int j=i;j<n;j++){
                temp_sum+=arr[j];
                int length=j-i+1;
                if(length&1) sum+=temp_sum;
            }
        }
        return sum;
    }
};