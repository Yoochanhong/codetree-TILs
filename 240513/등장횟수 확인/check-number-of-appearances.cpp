#include <iostream>

int main() {
    int r = 0;
    for (int i = 0, a; i < 5; i++){
        std::cin >> a;
        if (a % 2 == 0) r++;
    }
    std::cout << r;
    return 0;
}