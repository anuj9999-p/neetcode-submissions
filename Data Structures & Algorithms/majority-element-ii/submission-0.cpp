class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> res;
       for(int n:nums){
        int count=0;
        for(int i:nums){
            if(i==n) count++;
        }
        if(count>nums.size()/3){
            res.insert(n);
        }
       }
       return vector<int>(res.begin(),res.end());
    }
};