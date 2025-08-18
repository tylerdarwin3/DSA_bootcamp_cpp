#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for (int i = 1; i <= 2*x; i++) {
        if (i <= x) {
            int num_spaces = (x - i);
            int num_stars = 2*i - 1;
            for (int j = 1; j <= num_spaces; j++) {
                std::cout << ' ';
            }
            for (int j = 1; j <= num_stars; j++) {
                std::cout << '*';
            }
            std::cout << std::endl;
        }else {
            int num_spaces = i - x;
            int num_stars = 2*(2*x - i)-1;
            for (int j = 1; j <= num_spaces; j++) {
                std::cout << ' ';
            }
            for (int j = 1; j <= num_stars; j++) {
                std::cout << '*';
            }
            std::cout << std::endl;
        }
    }
    return 0;
}