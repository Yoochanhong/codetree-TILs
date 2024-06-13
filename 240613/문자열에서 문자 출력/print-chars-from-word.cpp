#include <iostream>

int main() {
    std::string a;
    std::cin >> a;
    for (char i : a) std::cout << i << "\n";
    return 0;
}