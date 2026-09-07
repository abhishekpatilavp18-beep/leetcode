class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        while(true){
            if(binary_search(nums.begin(),nums.end(),i)){
                i++;
            }else{
                return i;
            }
            
        }
        
    }
};