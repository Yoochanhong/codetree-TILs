#include <iostream>

int main() {
    int n;
    std::cin >> n;
    if (3 <= n && n <= 5) std::cout << "Spring";
    else if (6 <= n && n <= 8) std::cout << "Summer";
    else if (9 <= n && n <= 11) std::cout << "Fail";
    else std::cout << "Winter";
    return 0;
}