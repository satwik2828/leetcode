class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        // int no=0,ne=0,higho=INT_MAX,highe=INT_MAX;
        // for(int i:nums1){
        //     if(i&1) {
        //         no++;
        //         higho=min(higho,i);
        //     }
        //     else {
        //         ne++;
        //         highe=min(highe,i);
        //     }
        // }
        // if(no!=n && ne!=n){
        //     if(higho>=highe) return false; 
        // }
        // return true;
        int mini=*min_element(nums1.begin(),nums1.end());
        if(mini&1) return true;
        for(int i:nums1){
            if(i&1) return false;
        }
        return true;
    }//idi kuda ekkuve array lo eppudu minimum element odd avutene true and lekapothe anni evens vundali
};