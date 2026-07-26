class Solution {
public:
    void mergesort(vector<int>& nums1, int m, vector<int>& nums2, int n,vector<int>& nums3){
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){

                nums3[k] = nums1[i];
                i++;
                k++;
            }
            else if(nums1[i]>nums2[j]){

                nums3[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i<m){
            nums3[k] = nums1[i];
            i++;
            k++;
        }
        while(j<n){
            nums3[k] = nums2[j];
            j++;
            k++;
        }


    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m+n);

        mergesort(nums1,m,nums2,n,nums3);


         for (int i = 0; i < m + n; i++) {
            nums1[i] = nums3[i];
         }
         
    }
};