#include <iostream>

int main() {
    int x;
    std::cin >> x;
    int num_stars;
    int num_spaces;
    for (int i = 0; i < 2*x; i++) {
        if (i % 2 == 0) {
            if (i == 0 || i == 2*(x-1)) {
                num_stars = x;
                num_spaces = 0;
                for (int j = 0; j < num_stars; j++) {
                    std::cout << "*";
                }
            }else {
                num_stars = 1;
                num_spaces = x - 2;
                for (int j = 0; j < num_stars; j++) {
                    std::cout << "*";
                }
                for (int j = 0; j < num_spaces; j++) {
                    std::cout << " ";
                }
                for (int j = 0; j < num_stars; j++) {
                    std::cout << "*";
                }
            }
        }
        else {
            std::cout << std::endl;
        }
    }
    return 0;
}