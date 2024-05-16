#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    bool b = false;
    for (char i : a) {
        if (!b && i == 'e') {
            b = true;
            continue;
        }
        std::cout << i;
    }
    return 0;
}