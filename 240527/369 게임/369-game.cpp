#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        std::cout << (i % 3 && i % 6 && i % 9 && i % 30 && i % 60 && i % 90 ? i : 0) << " ";
    }
    return 0;
}