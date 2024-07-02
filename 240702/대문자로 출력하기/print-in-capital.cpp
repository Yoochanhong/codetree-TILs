#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    for (auto i : a) {
        if (i >= 65 && i <= 90) std::cout << i;
        else if (i >= 97 && i <= 122) std::cout << (char) (i - 32);
    }
    return 0;
}