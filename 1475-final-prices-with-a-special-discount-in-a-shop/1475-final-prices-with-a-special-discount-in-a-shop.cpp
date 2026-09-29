class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        int end = prices.size()-1;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    int digit =prices[i]-prices[j];
                    answer.push_back(digit);
                    break;
                }if(j==end && prices[j]>prices[i]){
                    answer.push_back(prices[i]);
                    break;
                }
                
            }
                
        }
            
            
            
        
        answer.push_back(prices[end]);
        return answer;

        
    }
};