#include <iostream>
#include <vector>

int main() {
    int x;
    std::cin >> x;
    int distFromCenter;
    int minDistFromCenter;
    std::vector<int> halfRow;
    for (int i = 0; i < 2*x-1; i++) {
        std::vector<int>().swap(halfRow);
        distFromCenter = x;
        if (i < x) {
            minDistFromCenter = x - i;
        }else {
            minDistFromCenter = i - x + 2;
        }

        for (int j = 0; j < x-1; j++) {
            std::cout << distFromCenter << " ";
            halfRow.push_back(distFromCenter);
            if (distFromCenter > minDistFromCenter) {
                distFromCenter--;
            }
        }
        std::cout << distFromCenter << " ";
        for (int j = x-2; j > 0; j--) {
            distFromCenter = halfRow[j];
            std::cout << distFromCenter << " ";
        }
        distFromCenter = halfRow[0];
        std::cout << distFromCenter << std::endl;
    }
    return 0;
}