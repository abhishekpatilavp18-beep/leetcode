class Solution {
public:
    int binarysearch(int n){
        long long int start = 0;
        long long int end = n;
        long long int mid = start + (end-start)/2;
        long long int ans = 0;
        while(start<=end){
            if(mid*mid==n){
               
                return mid;
            }else if(mid*mid<n){
                ans = mid;
                start = mid+1;

            }else if(mid*mid>n){
               end = mid-1;
            }
            mid = start + (end-start)/2;
        }return ans;

    }
    
    int mySqrt(int x) {
         return binarysearch(x);
       
        
    }
};