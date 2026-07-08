class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int remValue;
        for(int i=0;i<nums.size();i++){
            remValue = target - nums[i];
            for(int j = i+1;j<nums.size();j++){
                if(nums[j] == remValue){
                    return {i, j};
                }
            }
        }
        return {};
    }
};
