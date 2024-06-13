#include <iostream>

int main() {
    int c = 0;
    std::string a;
    for (int i = 0; i < 10; i++) {
        std::cin >> a;
        c += a.size();
    }
    std::cout << c;
    return 0;
}