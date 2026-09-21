class Solution {
public:
    string toLowerCase(string s) {
        string output(s.length(),' ');
        for(int i=0;i<s.length();i++){
            output[i]=tolower(s[i]);
        }
        
        return output;
        
    }
};