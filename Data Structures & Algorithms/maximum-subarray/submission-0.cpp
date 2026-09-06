class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int res=nums[0];
        int cursum=0;
        for(int n:nums){
            if(cursum<0) cursum=0;
            cursum+=n;
            res=max(cursum,res);
        }
       return res;
    }
};
