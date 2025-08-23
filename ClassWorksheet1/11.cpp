#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R;
    int C;
    cin >> R >> C;
    vector<vector<int>> matrix(R, vector<int>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<int> sumOfRows;
    for (int i = 0; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++) {
            sum += matrix[i][j];
        }
        sumOfRows.push_back(sum);
    }
    vector<double> averageOfRows;
    for (int i = 0; i < R; i++) {
        double avg_row_value = double(sumOfRows[i]) / C;
        averageOfRows.push_back(avg_row_value);
    }
    for (int i = 0; i < R; i++) {
        cout << averageOfRows[i] << endl;
    }
    return 0;
}