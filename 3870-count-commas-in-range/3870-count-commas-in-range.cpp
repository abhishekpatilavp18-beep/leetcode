class Solution {
public:
    int countCommas(int n) {
        if(n<=999){
            return 0;
        }
        int no;
        if(n>999 ){
             no = n-1000;
             

        }
       return no+1;
        
    }
};