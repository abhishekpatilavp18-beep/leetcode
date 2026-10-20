class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> output(heights);
        sort(output.begin(),output.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(output[i]!=heights[i]){
                count++;
            }
        }
        return count;
        
    }
};