#include <iostream>
#include <string>
using namespace std;

int main() {
    string snip;
    getline(cin, snip);
    int vowel_count = 0;
    for (char c : snip) {
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowel_count++;
        }
    }
    cout << vowel_count << endl;
    return 0;
}