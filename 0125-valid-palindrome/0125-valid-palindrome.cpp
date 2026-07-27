class Solution {
private: 
bool valid(char s){
    if((s>='a' && s<='z')||(s>='A' && s<='Z')||(s>='0' && s<='9')){
        return 1;
    }else
    return 0;
}

char toLower(char s){
    
    if((s>='a' && s<='z')||(s>='0' && s<='9')){
        return s;
    }else{
         
           return s-'A'+'a';
    }
   
    
}

bool validpalindrome(string s){
    int st = 0;
    int e = s.length() -1;
    while(st<=e){
        if(s[st]!=s[e]){
            return 0;
        }else{
       
        st++;
        e--;
        }


    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }

        }
        for(int j = 0;j<temp.length();j++){
            temp[j] = toLower(temp[j]);
        }
         return validpalindrome(temp);
    }

   
};