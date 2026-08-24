class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        int flag=0;
        for(int i:asteroids){
            if(i<0 && !st.empty()){
                while(!st.empty()){
                    int a=st.top();
                    if(a>0 && a<-i){
                        st.pop();
                    }
                    else if(a>0 && a==-i){
                        st.pop();
                        flag=1;
                        break;
                    }
                    else if(a>0 && a>-i) {
                        flag=1;
                        break;
                    }
                    else{
                        break;
                    }
                }
            }
            if(!flag)st.push(i);
            flag=0;
        }
        while(!st.empty()) ans.push_back(st.top()),st.pop();
        reverse(ans.begin(),ans.end());
       return ans; 
    }
};