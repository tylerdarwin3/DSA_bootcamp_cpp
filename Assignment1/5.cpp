#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for (int i = x; i > 0; i--) {
        int num_spaces = x - i;
        int num_stars = 2*i - 1;
        for (int j = 0; j < num_spaces; j++) {
            std::cout << ' ';
        }
        for (int j = 0; j < num_stars; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    return 0;
}