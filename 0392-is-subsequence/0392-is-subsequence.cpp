class Solution {
public:
    bool isSubsequence(string s, string t) {
        string str(s.length(),' ');
        int i =0;
            for(int j=0;j<t.length();j++){
                if(s[i]==t[j] ){
                    str[i]=t[j];
                    i++;



                }
            }
        
        if(str==s){
            return true;

        }else{
            return false;
        }
    }
};