class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> output(nums.size()*2);
        for(int i=0;i<nums.size();i++){
            output[i]=nums[i];
        }
        int end =nums.size();
        int index =0;
        for(int i=end;i<output.size();i++){
            output[i]=nums[index];
            index++;
            
        }
        return output;
        
    }
};