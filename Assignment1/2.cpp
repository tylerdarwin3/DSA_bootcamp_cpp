#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    return 0;
}