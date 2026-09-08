class Solution {
public:
    int findNumbers(vector<int>& nums) {
        long count =0;
        int output = 0;
        for(int i =0;i<nums.size();i++){
            int number = nums[i];
            while(number!=0){
                int digit = number%10;
                count++;
                number = number/10;
            }
            if(count%2==0){
                output++;
                count=0;
            }else{
                count=0;
            }
        }
        return output;
        
    }
};