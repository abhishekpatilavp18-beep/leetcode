class Solution {
public:
    bool checkIfPangram(string sentence) {
        char alp ='a';
        for(int i=0;i<26;i++){
            if(sentence.find(alp+i)==-1){
                return false;
            }
            
        }
        return true;
        
    }
};