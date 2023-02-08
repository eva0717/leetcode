class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, j;
        vector<int> result;
        for(i = 0; i < nums.size(); i++){
            int resOfMinus = target - nums[i];
            for(j = i+1; j < nums.size(); j++){
                if(resOfMinus == nums[j]){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
};
