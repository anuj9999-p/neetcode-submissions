class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> sp;
        for(int i=0;i<nums.size();i++){
            sp.push_back({nums[i],i});
        }
        sort(sp.begin(),sp.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int sum=sp[i].first+sp[j].first;
            if(sum==target){
                return {min(sp[i].second,sp[j].second),max(sp[i].second,sp[j].second)};
            }else if(sum>target){
                j--;
            }else{
                i++;
            }
        }
        return {-1,-1};
    }
};
