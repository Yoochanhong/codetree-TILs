#include <iostream>

int main() {
    std::string a[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> a[i];
    }
    char b;
    std::cin >> b;
    bool c = false;
    for (int i = 0; i < 10; i++) {
        if (b == a[i].back()) std::cout << a[i] << "\n", c = true;
    }
    if (c == false) std::cout << "None";
    return 0;
}