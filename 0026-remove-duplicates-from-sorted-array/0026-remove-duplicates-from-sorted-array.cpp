class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> under(nums.size());
       
            
        
        int k=0;
        int index = 0;
        int indexunder = 0; 
        for(int j=index;j<nums.size();){
            if(j < nums.size() - 1 &&nums[index]==nums[j+1])
                j++;
            else{
                under[indexunder]=nums[index];
                k++;
                index=j+1;
                indexunder++;
                j = index;
            }
        }
        for (int i = 0; i < k; i++) {
        nums[i] = under[i];
        }

        
        return k;
        
    }
};