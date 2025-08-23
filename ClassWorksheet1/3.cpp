#include <iostream>
#include <vector>
using namespace std;

vector<int> matrixRowSum(vector<vector<int>> & matrix) {
    int sum;
    vector<int> sumOfRows;
    for (vector<int> &row : matrix) {
        sum = 0;
        for (int elem : row) {
            sum += elem;
        }
        sumOfRows.push_back(sum);
    }
    return sumOfRows;
}
int main() {
    int R,C;
    cin >> R >> C;
    vector<vector<int>> matrix(R,vector<int>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<int> sumOfRows = matrixRowSum(matrix);

    for (int sum : sumOfRows) {
        cout << sum << endl;
    }
}