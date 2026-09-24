class Solution {
public:
    int smallestIndex(vector<int>& nums) {
      
        if(nums[0]==0){
            return 0;
        }
            
        
        for(int i=0;i<nums.size();i++){
            int  sum =0;
            int index =nums[i];
            
            while(index>0){
                
                
                int digit = index%10;
                sum =sum +digit;
                index =index/10;
                


            }
            if(sum==i){
                return i;
                }
           
        }
       
        return -1;
    }
};