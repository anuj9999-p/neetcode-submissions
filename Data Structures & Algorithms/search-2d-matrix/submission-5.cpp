class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();int n=matrix[0].size();
        int l=0;
        int c=n-1;
        while(l<m && c>=0){
            
            if(matrix[l][c]>target) c--;
            else if(matrix[l][c]<target) l++;
            else return true;
        }
        return false;
    }
};
