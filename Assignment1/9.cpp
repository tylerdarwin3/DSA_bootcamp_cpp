#include <iostream>

int main() {
    int x;
    std::cin >> x;
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 1; i <= x; i++) {
        int iterations_to_go = x - i + 1;
        int start_index = iterations_to_go - 1;
        int end_index = x - 1;
        for (int j = start_index; j <= end_index; j++) {
            std::cout << alphabet[j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}