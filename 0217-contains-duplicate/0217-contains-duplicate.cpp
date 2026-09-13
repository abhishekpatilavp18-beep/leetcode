class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return false;
        }
        for(int i=0;i<nums.size();i++){
            
            if(i<nums.size()-1 && binary_search(nums.begin()+(i+1),nums.end(),nums[i])){
                return true;
            }
        }
        return false;
        
    }
};