#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0, k = 65; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            std::printf("%c", k++);
            if (k == 90) k = 65;
        }
        std::cout << "\n";
    }
    return 0;
}