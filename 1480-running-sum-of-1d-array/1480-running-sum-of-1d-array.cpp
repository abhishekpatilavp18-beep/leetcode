class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> output(nums.size());       
        int sum =0;
        for(int i =0;i<=nums.size()-1;i++){
            sum = nums[i]+sum;
            output[i]=sum;
            

        }
        return output;
        
    }
};