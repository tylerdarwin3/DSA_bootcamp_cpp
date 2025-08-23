#include <iostream>
#include <vector>
using namespace std;

int main() {
    string word;
    cin >> word;
    string::iterator it = word.begin();
    string::reverse_iterator rit = word.rbegin();
    int len = word.length();
    int idx_half = len / 2 + 1;
    for (int i = 0; i < idx_half; i++) {
        if (*it != *rit) {
            cout << "No" << endl;
            return 0;
        }
        it++;
        rit++;
    }
    cout << "Yes" << endl;
    return 0;
}