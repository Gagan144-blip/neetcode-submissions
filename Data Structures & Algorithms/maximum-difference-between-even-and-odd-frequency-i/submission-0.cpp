class Solution {
public:
    int maxDifference(string s) {
        map<char, int>mp;
        int diff = 0;

        for(char ch : s){
            mp[ch]++;
            
        }

        int maxOdd = 0;
        int minEven = INT_MAX;


        for(auto it : mp){
           int freq = it.second;

           if(freq % 2 == 1){
            maxOdd = max(maxOdd, freq);
           } else{

            minEven = min(minEven , freq);
           }
        }
        
        return maxOdd - minEven;
    }
};