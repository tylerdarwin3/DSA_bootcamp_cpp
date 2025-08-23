#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // number of elements in arr
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += v[i];
        }
    }
    cout << sum << endl;
    return 0;
}
