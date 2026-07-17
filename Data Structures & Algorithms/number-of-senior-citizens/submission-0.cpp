class Solution {
public:
    int countSeniors(vector<string>& details) {
        string s;
        string age;
        int num = 0;
        int count = 0;

        for(int i=0;i<details.size();i++){
            s = details[i];

            age = s.substr(11, 2);
            num = stoi(age);
        
        if(num > 60){
            count++;
        }
        
        }
        return count;
    }
};