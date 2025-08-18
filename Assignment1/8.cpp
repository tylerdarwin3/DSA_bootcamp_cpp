#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for (int i = 1; i <= x; i++) {
        int num_spaces = 2*(x-i);
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }
        for (int j = 1; j <= num_spaces; j++) {
            std::cout << ' ';
        }
        for (int j = i; j > 0; j--) {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return 0;
}