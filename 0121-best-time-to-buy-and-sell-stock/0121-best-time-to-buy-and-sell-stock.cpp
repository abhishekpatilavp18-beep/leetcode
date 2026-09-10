class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int i = 0;
        int j=1;
        int sum =0;
        int min = INT_MIN;
        while(j<prices.size()){
            
            if( prices[i]<prices[j] ){
                int answer = prices[j]-prices[i];
                if(answer>min){
                    sum=answer;
                    min =answer;
                }
                j++;

            }else{
                i=j;
                j++;
            }
        }
        return sum;
    
        
    }
};