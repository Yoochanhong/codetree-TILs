#include <iostream>

int main() {
    int c = 1;
    for (int i = 0, a; i < 5; i++){
        std::cin >> a;
        if (a % 3) c = 0;
    }
    std::cout << c;
    return 0;
}