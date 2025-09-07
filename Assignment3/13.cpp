class Solution {
public:
    int median(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = INT_MAX;
        int high = INT_MIN;

        for (int i = 0; i < n; i++){
            if (mat[i][0] < low){
                low = mat[i][0];
            }
            if (mat[i][m-1] > high){
                high = mat[i][m-1];
            }
        }

        int req = (n * m + 1) / 2;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int smallEqual = 0;

            for (int i = 0; i < n; i++){
                smallEqual += upper_bound(mat[i].begin(),mat[i].end(), mid) - mat[i].begin();
            }

            if (smallEqual < req){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;

    }
};