class Solution {
public:
    int trap(vector<int>& height) {
        int res=0;
        int i=0;
        int j=height.size()-1;
        int leftsum=height[i];
        int rightsum=height[j];
        while(i<j){
             if(leftsum<rightsum){
                i++;
                leftsum=max(height[i],leftsum);
                res+=leftsum-height[i];
             }else{
                j--;
                rightsum=max(height[j],rightsum);
                res+=rightsum-height[j];
             }
        }
        return res;
    }
};
