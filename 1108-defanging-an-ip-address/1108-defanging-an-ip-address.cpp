class Solution {
public:
    string defangIPaddr(string address) {
        vector<char> output;
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                output.push_back('[');
                output.push_back('.');
                output.push_back(']');
           
            }else{
                output.push_back(address[i]);
            }

        }
        int size = output.size();
        string str(size,' ');
        int index =0;
        for( int i=0;i<output.size();i++){
            str[index]=output[i];
            index++;

        }
        return str;
        
    }
};