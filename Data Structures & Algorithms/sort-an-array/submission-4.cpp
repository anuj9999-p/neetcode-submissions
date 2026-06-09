class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> newarr;for(int i=0;i<nums.size();i++){newarr.push_back(nums[i]);
 } sort(newarr.begin(),newarr.end()); return newarr;
        
    }
};