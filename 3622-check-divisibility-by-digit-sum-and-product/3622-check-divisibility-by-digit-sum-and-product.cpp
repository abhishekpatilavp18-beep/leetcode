class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum=0;
        int digitproduct = 1;
        int original = n;
      

        while(n!=0){
            int copy = n%10;
            int lastnumber = copy;
            digitsum = digitsum+copy;
            digitproduct = digitproduct*copy;
            n=n/10;

        }
        int div = digitsum+digitproduct;
        
        if(digitsum+digitproduct==original){
            return true;
        }
        if(original%div==0){
            return true;
        }
       
        return false;
        
        


        
    }
};