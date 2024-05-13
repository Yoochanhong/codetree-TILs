#include <iostream>

int main() {
    int a;
    std::cin >> a;
    for (int i = 1; i <= a; i++){
        if ((i % 2 == 0 && i % 4) || i / 8 % 2 == 0 || i % 7 < 4) continue;
        std::cout << i << " ";
    }
    return 0;
}