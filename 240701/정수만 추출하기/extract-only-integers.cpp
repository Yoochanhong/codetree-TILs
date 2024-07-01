#include <iostream>

int main() {
    int c = 0, d = 0;
    std::string a, b;
    std::cin >> a >> b;
    for (auto i : a) {
        if (i >= 48 && i <= 58) c = c * 10 + i - 48;
        else break;
    }
    for (auto i : b) {
        if (i >= 48 && i <= 58) d = d * 10 + i - 48;
        else break;
    }
    std::cout << c + d;
    return 0;
}