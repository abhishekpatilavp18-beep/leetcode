class Solution {
private:
bool oddoreven(vector<int>& nums1){
        int counteven =0;
        int countodd=0;
        int size = nums1.size();
        for(int i =0;i<nums1.size();i++){
            if(nums1[i]%2==0 ){
                counteven++;
            }
            else{
                countodd++;
            }
        }
        if(counteven==size || countodd==size){
            return true;
        }
         return false;
}
public:
    bool uniformArray(vector<int>& nums1) {
        if(oddoreven(nums1)){
            return true;
        }
        
       
        
        for(int i=0;i<nums1.size();i++){
            vector<int> nums2(nums1.size());
            
            for(int j=0;j<nums1.size();j++){
                if(i==j){
                    nums2[i]=nums1[j];
                }
                else if(nums1[j]%2==0){
                    
                    nums2[j]=nums1[j]-nums1[i]; 
                    
                }else{
                    nums2[j]=nums1[j];

                }
            }
            if(oddoreven(nums2)){
                return true;
            } 
                      
        }
         
        
        return false ;

    }
};