#include <iostream>

int main() {
    int x;
    std::cin >> x;
    int num_stars;
    int num_spaces;
    int preceding_spaces = x - 1;

    std::cout << "Solid Rhombus: " << std::endl;
    for (int i = 0; i < 2*x; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < preceding_spaces; j++) {
                std::cout << " ";
            }
            preceding_spaces--;
            num_stars = x;
            for (int j = 0; j < num_stars; j++) {
                std::cout << "*";
            }

        }
        else {
            std::cout << std::endl;
        }
    }
    preceding_spaces = x - 1;
    std::cout << std::endl << "Hollow Rhombus: " << std::endl;
    for (int i = 0; i < 2*x; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < preceding_spaces; j++) {
                std::cout << " ";
            }
            preceding_spaces--;
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