class Solution {
public:
    string Binary(int num){
        string s;
        while(num>0){
            s.push_back((num%2)+'0');
            num/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0,4));
        int day=stoi(date.substr(5,2));
        int datee=stoi(date.substr(8,2));
        return Binary(year)+"-"+Binary(day)+"-"+Binary(datee);
    }
};