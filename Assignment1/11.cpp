#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for (int i = 0; i < 2*x - 1; i++) {
        int num_stars;
        int num_spaces;
        if (i < x) {
            num_stars = i + 1;
            num_spaces = 2* (x - i - 1);
        }else {
            num_stars = 2*x - i - 1;
            num_spaces = 2* (i - x + 1);
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