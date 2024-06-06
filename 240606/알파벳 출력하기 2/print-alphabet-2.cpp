#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1, k = 65; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::printf("%c ", j < i ? ' ' : k++);
            if (k == 91) k = 65;
        }
        std::cout << "\n";
    }
    return 0;
}