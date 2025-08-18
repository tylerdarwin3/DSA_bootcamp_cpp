#include <iostream>
#include <vector>
#include <vector>

int main() {
    int x;
    std::cin >> x;
    int num_spaces = x - 1;
    int max_row_value;
    int lowest_row_value = 1;
    int num_values;
    std::vector<int> halfRow;
    int current_row_value;
    for (int i = 0; i < x; i++) {
        std::vector<int>().swap(halfRow);
        if (i <= x/2) {
            num_values = 2*i+1;
            num_spaces = x/2 - i;
            max_row_value = i+1;
        }else if (i > x/2) {
            num_values = x - 2*(i-x/2);
            num_spaces = i - x/2;
            max_row_value--;
        }

        current_row_value = max_row_value;
        for (int j = 0; j < num_spaces; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < num_values/2; j++) {
            std::cout << current_row_value;
            halfRow.push_back(current_row_value);
            current_row_value--;
        }
        std::cout << lowest_row_value;
        for (int j = num_values/2-1; j >= 0; j--) {
            current_row_value = halfRow[j];
            std::cout << current_row_value;
        }
        std::cout << std::endl;
    }
    return 0;
}