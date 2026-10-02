class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> output;

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {

            if(!binary_search(output.begin(), output.end(), nums[i])) {
                output.push_back(nums[i]);
            }
        }

        if(output.size() < 3) {
            return output[output.size()-1];
        }

        return output[output.size()-3];
    }
};