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
    vector<int>::iterator it = v.begin();
    vector<int>::reverse_iterator it2 = v.rbegin();
    int idx_half = n/2+1;
    for (int i = 0; i < idx_half; i++) {
        int tmp = *it;
        int tmp2 = *it2;
        if (tmp != tmp2) {
            cout << "No" << endl;
            return 0;
        }
        it++;
        it2++;
    }
    cout << "Yes" << endl;
    return 0;
}