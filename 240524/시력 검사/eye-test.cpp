#include <iostream>

int main() {
    double a, b;
    std::cin >> a >> b;
    if (a >= 1.0 && b >= 1.0) std::cout << "High";
    else if (a >= 0.5 && b >= 0.5) std::cout << "Middle";
    else std::cout << "Low";
    return 0;
}