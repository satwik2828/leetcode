class Solution {
public:
    void merge(vector<int>&nums,int l,int m ,int h){
    	vector<int>result(h-l+1);
    int i=l,j=m+1,k=0;
    while(i<=m && j<=h){
    	if(nums[i]<=nums[j]){
    	     result[k++]=nums[i++];
    	}
    	else{ 
    	result[k++]=nums[j++];
    	}
    }
    while(i<=m) result[k++] = nums[i++];
    while(j<=h) result[k++] = nums[j++];
    int c=0;
    for(i=l;i<=h;i++){
    	nums[i]=result[c++];
    }
    }
    int count_pairs(vector<int>&nums,int l,int m,int h){
        int right=m+1,count=0;
        for(int i=l;i<=m;i++){
            while(right<=h and nums[i]>2LL*nums[right]){
            right++;
            }
            count+=(right-(m+1));
        }
        return count;
    }
    int  merge_sort(vector<int>&nums,int l,int h){
        int c=0;
    	if(l<h){
    		int m=(l+h)/2;
    	    c+=merge_sort(nums,l,m);
    	    c+=merge_sort(nums,m+1,h);
            c+=count_pairs(nums,l,m,h);
        	merge(nums,l,m,h);
    	}
        return c;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return merge_sort(nums,0,n-1);
    }
};