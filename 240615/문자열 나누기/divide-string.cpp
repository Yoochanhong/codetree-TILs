#include <iostream>

int main() {
    int n;
    std::string a, b;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        b += a;
    }
    for (int i = 0; i < b.size() / 4; i++) {
        for (int j = 0; j < 5 && b[i * 5 + j]; j++) {
            std::cout << b[i * 5 + j];
        }
        std::cout << "\n";
    }
    return 0;
}