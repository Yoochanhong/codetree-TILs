#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        std::cout << !(i % 2 && i % 3) << " ";
    }
    return 0;
}