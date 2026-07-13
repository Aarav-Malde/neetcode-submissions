class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int k = 0 ;
        int n = nums.size();
        for(int b = n/2; b>=1; b/=2){
            while(b+k<n && nums[b+k]<=target)
                k+=b;
        }

        if(target>nums[k])
            return k+1;
        else
            return k;
        
    }
};