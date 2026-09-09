class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        int min= INT_MIN;
        int output;
        int rows = accounts.size();
        int col = accounts[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                sum = sum+accounts[i][j];

            }
            
            if(min<sum){
                output =sum;
                min =sum;

            }
            sum=0;
        }
        return output;
        
    }
};