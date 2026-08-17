class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j =nums.size()-1;
        
        int cnt=0;
        while(i<=j){
            if(nums[i]!=val){
                i++;
            }
            else if(nums[j]==val){
                j--;
                cnt++;
            } 
            else{
                swap(nums[i],nums[j]);
                i++;
                j--;
                cnt++;
            }
            

        }
        return nums.size()-cnt;
        
    }
};