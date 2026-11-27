class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        for(int i=0;i<s.length();i++){
            if(s[i]!='#'){
                s1.push(s[i]);
            }
            if(!s1.empty() && s[i]=='#'){
                s1.pop();
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]!='#'){
                s2.push(t[i]);
            }
            if(!s2.empty() && t[i]=='#'){
                s2.pop();
            }
        }
        if(s1.empty() && s2.empty()){
            return true;
        }
        if(s1.empty() || s2.empty()){
            return false;
        }
        while(!s1.empty()){
            if(s1.size()!=s2.size()){
                return false;
            }
            if(s1.top()!=s2.top()){
                return false;
            }
            s1.pop();
            s2.pop();
        }
        return true;
    }
};