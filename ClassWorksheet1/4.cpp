#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int count_positive = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) {
            count_positive++;
        }
    }
    cout << count_positive;
    return 0;
}