class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string output;
        for(int i=0;i<s.length();i++){
            
            if(s[i]==' ' || i>s.length()){
                count++;
               

            }
            if(k==count){
                break;
            }
             output+=s[i];

        }
        return output;
        
    }
};