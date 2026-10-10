class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                if(allowed.find(words[i][j])==-1){
                    count++;
                    break;
                }

            }

        }
        int output =words.size()-count;
        return output;
    }
};