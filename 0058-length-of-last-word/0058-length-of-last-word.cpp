class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.length()-1;
        int i = s.length();
        if(i==1){
            return 1;
        }
        while(s[j]==' '){
            j--;
        }
        int cnt=0;
        while(j>-1 && s[j]!=' '  ){
            cnt++;
            j--;
        }
        return cnt;
        
    }
};