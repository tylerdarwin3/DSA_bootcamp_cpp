#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for (int i = 0; i < 2*x; i++) {
        int num_spaces;
        int num_stars;
        if (i < x) {
            num_spaces = 2*i;
            num_stars = x - i;
        } else {
            num_spaces = 2*(2*x - i - 1);
            num_stars = i - x + 1;
        }
        for (int j = 0; j < num_stars; j++) {
            std::cout << "*";
        }
        for (int j = 0; j < num_spaces; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < num_stars; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}