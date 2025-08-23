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
    int t;
    int r;
    cin >> t >> r;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int tmp = matrix[i][j];
            if (tmp == t) {
                matrix[i][j] = r;
            }
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}