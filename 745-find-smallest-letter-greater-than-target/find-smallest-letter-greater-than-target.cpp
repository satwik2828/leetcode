class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left=0,right=letters.size()-1;
        char ans=letters[0];
        while(left<right){
        int mid=(left+right)/2;
        if(letters[mid]<=target) left=mid+1;
        else right=mid-1;
        }
        cout<<left<<right<<endl;
       if(letters[left]<=target && left==letters.size()-1) return ans;
       if(letters[left]<=target) return letters[left+1];
       return letters[left];
    }
};