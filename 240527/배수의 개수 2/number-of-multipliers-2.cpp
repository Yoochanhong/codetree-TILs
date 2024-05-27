#include <iostream>

int main() {
    int c = 0;
    for (int i = 0, a; i < 10; i++){
        std::cin >> a;
        if (a % 2) c++;
    }
    std::cout << c;
    return 0;
}