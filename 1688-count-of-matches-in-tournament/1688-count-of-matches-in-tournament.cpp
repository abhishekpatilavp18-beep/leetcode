class Solution {
public:
    int numberOfMatches(int n) {
        long matches=0;
       
        int num =n;
        while(num!=1){
             if(num%2==0){
                matches =matches+(num)/2;
                num =num/2;

             }
             else{
                matches =matches+(num-1)/2;
                num =(num-1)/2+1;
             }


        }
        return matches;
       
        
    }
};