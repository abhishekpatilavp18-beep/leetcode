class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> output(nums.size());
        int start = 0;
        int end = nums.size()-1;
        int  mid = start+(end-start)/2;
        int index =0;
        for(int i =0;i<n;i++){
            output[index]=nums[i];
            index++;
            if(mid+1<=nums.size()-1){
                output[index]=nums[mid+1];
                 mid =mid+1;
                 index++;

            }
            
        }
        return output;
    }
};