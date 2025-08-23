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
    int t;
    cin >> t;
    int num_occurrences = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == t) {
            num_occurrences++;
        }
    }
    cout << num_occurrences << endl;
    return 0;
}