class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int output =0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="X++" || operations[i]=="++X"){
                output =output+1;
            }else{
                output = output-1;
            }
        }
        return output;
        
    }
};