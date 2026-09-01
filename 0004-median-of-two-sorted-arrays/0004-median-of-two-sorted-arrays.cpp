class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double size = nums1.size()+nums2.size();
        vector <int> result(size);
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),result.begin());
        double s = 0;
        double e = result.size()-1;
        double mid = s+(e-s)/2;
        if(result.size()%2==0){
            double decimal  = (result[mid]+result[mid+1])/2.0;
            return decimal;
        }
        return result[mid];
        
    }
};