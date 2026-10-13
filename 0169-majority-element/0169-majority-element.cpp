class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int sz =nums.size()/2;
        int cnt =0;
        if(nums.size()==1){
            return nums[0];
        }
        int sz1=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
                if(nums[i]!=nums[j]){
                    if(cnt>sz){
                        return nums[i];
                    }else{
                        i=j;
                        j=i;
                    }
                }
                if(nums[i]==nums[j] && j==sz1){
                    return nums[i];
                }
            }
            

        }
        return 0;
        
    }
};