class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(int i=0;i<operations.size();i++){
            if(operations[i]!="C" && operations[i]!="D"&& operations[i]!="+"){
                int temp = stoi(operations[i]);
                s.push(temp);
            }
            if(operations[i]=="C"){
                s.pop();
            }
            if(operations[i]=="D"){
                int temp1 = s.top()*2;
                s.push(temp1);
            }
            if(operations[i]=="+"){
                int temp2 = s.top();
                s.pop();
                int temp3 = s.top()+temp2;
                s.push(temp2);
                s.push(temp3);

            }
            

        }
        int total=0;
        while(!s.empty()){
            total = total + s.top();
            s.pop();
        }
        return total;
        
    }
};