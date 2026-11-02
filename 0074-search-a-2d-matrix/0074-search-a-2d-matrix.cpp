class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat, int tar, int row){
        int n = mat[0].size();
        int st = 0, end = n-1;

        while(st <= end){
            int mid = st+(end-st)/2;
            if(tar == mat[row][mid]){
                return true;
            }else if(tar > mat[row][mid]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size(), n = mat[0].size();

        int srow = 0, erow = m-1;
        while(srow <= erow){
            int mrow = srow +(erow-srow)/2;

            if(tar >= mat[mrow][0] && tar <= mat[mrow][n-1]){
                return searchInRow(mat, tar, mrow);
            }
            if(tar > mat[mrow][n-1]){
                srow = mrow + 1;
            }else{
                erow = mrow-1;
            }
        }
        return false;
    }
};