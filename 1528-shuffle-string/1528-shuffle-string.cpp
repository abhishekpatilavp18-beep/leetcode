class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      
        string arr(s.length(),' ');
        for(int i=0;i<indices.size();i++){
            int index = indices[i];
            arr[index]=s[i];
        }
        
        return arr;
        
    }
};