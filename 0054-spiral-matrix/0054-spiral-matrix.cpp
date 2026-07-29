class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     int row = matrix.size();
     int col = matrix[0].size();
     int count = 0;
     int total = row*col;
     int startingrow = 0;
     int startingcol = 0;
     int endingrow = row-1;
     int endingcol = col-1;
     vector<int>ans;


     while(total>count){
        for(int index = startingcol;total>count && index<=endingcol;index++){
            ans.push_back(matrix[startingrow][index]);
            count++;

        }
        startingrow++;
        for(int index = startingrow;total>count && index<=endingrow;index++){
            ans.push_back(matrix[index][endingcol]);
            count++;

        }

         endingcol--;

         for(int index=endingcol;total>count && index>=startingcol;index--){
            ans.push_back(matrix[endingrow][index]);
            count++;
         }
         endingrow--;
         for(int index = endingrow;total>count && index>=startingrow;index--){
            ans.push_back(matrix[index][startingcol]);
            count++;
         }
          startingcol++;
     } 

     return ans;
     



     
    }
};