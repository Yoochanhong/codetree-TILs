#include <iostream>

int main() {
    int n, a[15][15];
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i) a[i][j] = 1;
            else a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << a[i][j] <<  " ";
        }
        std::cout << "\n";
    }
    return 0;
}