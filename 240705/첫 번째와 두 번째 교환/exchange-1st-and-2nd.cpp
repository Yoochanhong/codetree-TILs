#include <iostream>

int main() {
    std::string a, b;
    std::cin >> a;
    b = a;
    for (auto &i : b) {
        if (i == a[0]) i = a[1];
        else if (i == a[1]) i = a[0];
    }
    std::cout << b;
    return 0;
}