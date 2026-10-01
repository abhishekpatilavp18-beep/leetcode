class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int last = nums.size()-1;
        int lastsecond =nums.size()-2;
        int output = (nums[last]-1)*(nums[lastsecond]-1);
        return output;
        
    }
};