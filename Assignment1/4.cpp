#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for (int i = x; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return 0;
}