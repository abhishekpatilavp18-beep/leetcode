class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        while(n!=0){
            int digit;
            
            digit = n%10;
            sum = digit +sum;
            product = digit * product;
            n = n/10;
        }
        int answer = product - sum;
        return answer;


    }
};