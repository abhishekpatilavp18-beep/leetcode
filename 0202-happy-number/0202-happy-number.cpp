class Solution {
public:
    bool isHappy(int n) {
        if(n==1){
            return 1;
        }
        
        vector<int> seen;
        int number =n;
        int sum =0;
        while(number!=0){
            
            int digit =number%10;
            int multi = digit*digit;
            
             sum = sum+multi;
            number =number/10;
            if(number==0){
                
                number = sum;
                
                for(int i=0;i<seen.size();i++){
                    if(seen[i]==sum){
                        return false;
                    }
                }
                if(sum==1){
                    return true;
                }
                seen.push_back(sum);
                sum =0;
            }


        }
        return true;
        
    }
};