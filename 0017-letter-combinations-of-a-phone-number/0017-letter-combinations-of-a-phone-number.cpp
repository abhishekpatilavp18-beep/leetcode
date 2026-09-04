class Solution {
private:
    void solve(string digits,int index,string mapping[],vector <string> &ans,string output){
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int number = digits[index]-'0';
        string value = mapping[number];
        for(int i =0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits,index+1,mapping,ans,output);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        int index =0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector <string> ans;
        string output;
        solve(digits,index,mapping,ans,output);
        return ans;
    }
};