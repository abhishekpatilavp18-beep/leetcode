class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        unordered_map<char,int> m;
        unordered_map<char,int> m1;
        for(auto x: ransomNote){
            m[x]++;
        }
        for(auto x: magazine){
            m1[x]++;
        }
        for(auto x: ransomNote){
            if(m[x]>m1[x]){
                return false;
            }
            
        }
        return true;
        
    }
};