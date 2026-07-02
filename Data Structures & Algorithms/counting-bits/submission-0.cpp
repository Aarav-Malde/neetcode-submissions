class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output;
        for(int i=0; i<=n; i++){
            int count =0;
            int dup =i;
            while(dup>0){
                count+=(1&dup);
                dup>>=1;
            }
            output.push_back(count);
        }
        return output;
    }
};
