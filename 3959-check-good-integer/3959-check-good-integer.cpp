class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum = 0;
        int squarenum = 0;
        while(n!=0){
            int lastnumber = n%10;
            digitsum = digitsum+lastnumber;
            squarenum = squarenum+(lastnumber*lastnumber);
            n = n/10;
        }
        if(squarenum-digitsum>=50)
            return true;
        
        return false;
    }
   
};