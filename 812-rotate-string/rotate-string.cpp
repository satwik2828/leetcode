class Solution {
public:
    bool rotateString(string s, string goal) {
    //   int k=s.length()-1;
    //   int l=goal.length()-1;
    //   if(k!=l) return false;
    //   string temp=s;
    //   while(k>=0){
    //     reverse(temp.begin(),temp.end());
    //     reverse(temp.begin(),temp.begin()+k);
    //     reverse(temp.begin()+k,temp.end());
    //     cout<<temp;
    //     if(temp==goal){
    //         return true;
    //     }
    //     else{
    //         temp=s;
    //         k--;
    //     }
    //   }
    //   return false;
    if(s.size()!=goal.size()) return false;
        for(int i=0;i<s.size();i++){
            char ad=s[0];
            s.erase(0,1);
            s+=ad;
            if(s==goal) return true;
        }
        return false;
    }
};