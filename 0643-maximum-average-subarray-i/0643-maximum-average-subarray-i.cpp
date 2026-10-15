class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        double sum =0;
        for(int i=0;i<k;i++){
            sum =sum+nums[i];
        }
        avg=sum/k;
        double maxavg =avg;
        for(int i=k;i<nums.size();i++){
            sum =sum-nums[i-k]+nums[i];
            avg =sum/k;
            if(maxavg<avg){
                maxavg=avg;
            }
        }
        return maxavg;

        
    }
};