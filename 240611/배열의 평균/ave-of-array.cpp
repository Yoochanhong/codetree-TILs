#include <iostream>

int main() {
    double a[2][4], c = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> a[i][j];
            c += a[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        double b = 0;
        for (int j = 0; j < 4; j++) b += a[i][j];
        std::printf("%.1lf ", b / 4);
    }
    std::cout << "\n";
    for (int i = 0; i < 4; i++) {
        std::printf("%.1lf ", (a[0][i] + a[1][i]) / 2);
    }
    std::printf("\n%.1lf", c / 8);
    return 0;
}