#include <iostream>

int main() {
    int a, b;
    char c;
    bool d = false;
    while(std::cin >> a >> b >> c) {
        if (d) continue;
        std::cout << a * b << '\n';
        if (c == 67) d = !d;
    }
    return 0;
}