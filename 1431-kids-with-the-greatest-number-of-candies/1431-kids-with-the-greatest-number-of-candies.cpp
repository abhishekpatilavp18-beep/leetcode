class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size = candies.size();
        int maxi = *max_element(candies.begin(),candies.end());
        vector<bool> output(candies.size(),false);
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxi){
                output[i]=true;
            }
            
        }
        return output;
        
    }
};