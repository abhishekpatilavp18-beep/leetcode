class Solution {
public:
    bool isAnagram(string s, string t) {
        int indexs = 0;
        int indext= 0;
        
        if(s.length()!=t.length()){
            return false;
        }
        while(s.length()>0){
            if(s[indexs]==t[indext]){
                s.erase(indexs,1);
                t.erase(indext,1);
                indexs=0;
                indext =0;
                
            }
           
            else{
                 indext++;
                 if(indext==t.length()){
                    return false;
                 }

            }
               
            
        }
        return true;
        
    }
};