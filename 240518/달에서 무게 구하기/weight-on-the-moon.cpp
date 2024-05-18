#include <iostream>

int main() {
    int a = 13;
    double b = 0.165;
    std::cout.precision(6);
    std::printf("%d * %.6lf = %.6lf", a , b , a * b);
    return 0;
}