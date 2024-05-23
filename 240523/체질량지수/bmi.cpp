#include <iostream>

int main() {
    int h, w;
    std::cin >> h >> w;
    double b = (10000 * w) / (h * h);
    std::printf("%.0lf", b);
    if (b >= 25.0) std::cout << "\nObesity";
    return 0;
}