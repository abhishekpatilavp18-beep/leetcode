class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int value;
        for(int i=0;i<nums.size();i++){
          value = nums[i];
            for(int j = i+1;j<nums.size();j++){
                    if(value+nums[j]==target)
                         return {i,j};


            }
        }
        return {};
        
    }
};