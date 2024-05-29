#include <iostream>

int main() {
    int a, b, c = 1;
    std::cin >> a >> b;
    for (int i = 0; i < b; i++) c *= a;
    std::cout << c;
    return 0;
}