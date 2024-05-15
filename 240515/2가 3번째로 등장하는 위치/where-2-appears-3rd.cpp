#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1, j = 0, k; i <= n; i++){
        std::cin >> k;
        if (k == 2) {
            j++;
            if (j == 3) {
                std::cout << i;
                break;
            }
        }
    }
    return 0;
}