class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();
        string output = string(max(n,m)+1, '0');
        cout<<output<<" ";
        if(n>m){
            for(int i=0; i<n-m; i++){
                b='0'+b;
            }
        }
        else{
            for(int i=0; i<m-n; i++){
                a='0'+a;
            }
        }
        char carry = '0';
        for(int i=max(m,n)-1; i>=0; i--){
            int sum = (a[i] - '0') + (b[i] - '0') + (carry-'0');
            if(sum==0){
                output[i+1]='0';
                carry = '0';
            }
            else if(sum==1){
                output[i+1]='1';
                carry = '0';
            } 
            else if(sum==2){
                output[i+1]='0';
                carry='1';
            }
            else{
                output[i+1]='1';
                carry='1';
            }
            cout<<output<<" ";
        }
        output[0]=carry;
        if(output[0]=='0'){
            output.erase(0,1);
        }
        return output;
        }
    
};