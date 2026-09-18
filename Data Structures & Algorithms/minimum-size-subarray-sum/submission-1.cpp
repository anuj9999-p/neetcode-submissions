class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int total=0;
        int res=INT_MAX;
        for(int j=0;j<nums.size();j++){
            total+=nums[j];
            while(total>=target){
                res=min(j-i+1,res);
                total-=nums[i];
                i++;
            }
        }
        return res=(res==INT_MAX)?0:res;
    }
};