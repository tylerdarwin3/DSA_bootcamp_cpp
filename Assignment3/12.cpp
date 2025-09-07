class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()){
            return false;
        }

        int numRows = matrix.size();
        int numCols = matrix[0].size();
        int i = 0;
        int j = numCols - 1;

        while (i >= 0 && i < numRows && j >= 0 && j < numCols){
            if (matrix[i][j] == target){
                return true;
            }else if (matrix[i][j] > target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};