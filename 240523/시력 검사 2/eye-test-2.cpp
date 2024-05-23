#include <iostream>

int main() {
    double a;
    std::cin >> a;
    std::cout << (a >= 1.0 ? "High" : a >= 0.5 ? "Middle" : "Low");
    return 0;
}