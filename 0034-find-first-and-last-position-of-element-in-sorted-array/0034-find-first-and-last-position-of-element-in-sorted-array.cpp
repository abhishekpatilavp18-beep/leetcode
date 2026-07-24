  int firstocc(vector<int>& nums, int target){
  int start = 0;
        int size = nums.size();
        int end =  size -1;
        int ans = -1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                ans = mid;
                end = mid -1;
            }else if(nums[mid]>target){
                end = mid-1;

            }else if(nums[mid]<target){
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
  }

  int lastocc(vector<int>& nums, int target){
  int start = 0;
        int size = nums.size();
        int end =  size -1;
        int ans = -1;
        int mid = start + (end-start)/2;
        while(start<=end){
            if(nums[mid]==target){
                ans = mid;
                start = mid +1;
            }else if(nums[mid]>target){
                end = mid-1;

            }else if(nums[mid]<target){
                start = mid+1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
  }

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      return{firstocc(nums,target),lastocc(nums,target)};
        }
       
    };
