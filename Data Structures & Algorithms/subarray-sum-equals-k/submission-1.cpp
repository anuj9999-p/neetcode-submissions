class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res=0;
        int cursum=0;
        unordered_map<int,int> prefixsum;
        prefixsum[0]=1;
        for(int num:nums){
            cursum+=num;
            int diff=cursum-k;
            res+= prefixsum[diff];
            prefixsum[cursum]++;
        }
        return res;

    }
};