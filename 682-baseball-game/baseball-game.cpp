class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>temp;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                temp.pop_back();
            }
            else if(operations[i]=="D"){ temp.push_back(temp.back()*2);}
            else if(operations[i]=="+") {temp.push_back(temp[temp.size()-1]+temp[temp.size()-2]);}
            else{
                 temp.push_back(stoi(operations[i]));
            }
        }
        int sum=0;
        for(int i:temp){
            sum+=i;
        }
        return sum;
    }
};