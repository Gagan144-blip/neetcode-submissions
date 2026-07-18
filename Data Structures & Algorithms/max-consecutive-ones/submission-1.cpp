class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum = 0;
        int current = 0;
        for(int num : nums){
            if(num == 1){
                current++;
                maximum = max(current, maximum);
            } else { 
                current = 0;
            }
        }
        return maximum;
    }
};