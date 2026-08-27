class Solution {
public:
    bool rotateString(string s, string goal) {
      int k=s.length()-1;
      int l=goal.length()-1;
      if(k!=l) return false;
      string temp=s;
      while(k>=0){
        reverse(temp.begin(),temp.end());
        reverse(temp.begin(),temp.begin()+k);
        reverse(temp.begin()+k,temp.end());
        cout<<temp;
        if(temp==goal){
            return true;
        }
        else{
            temp=s;
            k--;
        }
      }
      return false;
    }
};