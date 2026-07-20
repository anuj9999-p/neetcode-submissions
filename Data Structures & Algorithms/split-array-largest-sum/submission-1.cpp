class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l=*max_element(nums.begin(),nums.end());
        int r=accumulate(nums.begin(),nums.end(),0);
        int res = r;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(cansplit(nums,k,mid)){
                res=mid;
                r=mid-1;
            }else {
                l=mid+1;
            }
        }
        return res;

    }
    private: 
    bool cansplit(vector<int>& nums,int k,int largest){
        int subarray=1;
        int cursum=0;
        for(int nu:nums){
            cursum+=nu;
            if(cursum>largest){
                subarray++;
                if(subarray>k)return 0;
                cursum=nu;
            }
            
        }
        return true;
        
    }
};