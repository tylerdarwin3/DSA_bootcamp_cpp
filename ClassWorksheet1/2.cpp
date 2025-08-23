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
    int maximum_elem = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (v[i] > maximum_elem) {
            maximum_elem = v[i];
        }
    }
    cout << maximum_elem << endl;
    return 0;
}