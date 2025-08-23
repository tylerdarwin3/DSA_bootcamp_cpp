#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<vector<int>> v(N, vector<int>(N, 0));
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> v[i][j];
        }
    }
    int diag_sum = 0;
    for(int i = 0; i < N; i++) {
        diag_sum += v[i][i];
    }
    cout << diag_sum << endl;
    return 0;
}