#include <iostream>

int main() {
    int x;
    std::cin >> x;
    int count;
    for (int i = 0; i < x; i++) {
        count = (i % 2 == 1);
        for (int j = 0; j <= i; j++) {
            if (count % 2 == 0) {
                std::cout << 1 << " ";
            }else {
                std::cout << 0 << " ";
            }
            count++;
        }
        std::cout << std::endl;
    }
    return 0;
}