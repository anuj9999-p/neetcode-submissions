class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goa=nums.size()-1;
      for(int i=nums.size()-2;i>=0;i--){
        if(i+nums[i]>=goa){
            goa=i;
        }
      }
      return goa==0;
    }
};
