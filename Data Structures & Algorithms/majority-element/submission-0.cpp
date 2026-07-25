class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> seen;

        for(int num : nums){
                seen[num]++;
        }
            for(auto x: seen){
                if(x.second > nums.size() / 2){
                    return x.first;
                }
            
        }
        return -1;
    }
};