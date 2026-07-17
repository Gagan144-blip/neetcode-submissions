class Solution {
public:
    int countSeniors(vector<string>& details) {
        int num = 0;
        int count = 0;

        for(int i=0;i<details.size();i++){
        num = stoi(details[i].substr(11,2));

        if(num > 60){
            count++;
        }
        
        }
        return count;
    }
};