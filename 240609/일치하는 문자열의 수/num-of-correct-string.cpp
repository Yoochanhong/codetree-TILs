#include <iostream>

int main() {
    int n, c = 0;
    std::string a, b;
    std::cin >> n >> a;
    while(n--) {
        std::cin >> b;
        if (a == b) c++;
    }
    std::cout << c;
    return 0;
}