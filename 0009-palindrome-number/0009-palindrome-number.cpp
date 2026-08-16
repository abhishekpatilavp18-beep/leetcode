class Solution {
private:
bool check(int arr[],int brr[],int sizebrr){
    
    for(int i=0;i<sizebrr;i++){
        if(arr[i]!=brr[i]){
            return false;
        }
    }
    return true;
}
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;

        }
        
        
       
        int index = 0;
        int original = x;

        string s = to_string(original);
       

        int sizebrr = s.length();
        if(sizebrr==1){
            return true;
        }


         int brr[sizebrr];

        int arr[sizebrr];

        for(int i=0;i<s.length();i++){
            arr[i]=s[i]-'0';
        }
         while(x!=0){
            
            int n = x%10;
            brr[index]=n;
            index++;
            x=x/10;
            


        }
        return check(arr,brr,sizebrr);

        
    }
};