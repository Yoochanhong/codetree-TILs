#include <iostream>

int main() {
    int n, a[11][11] = {};
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == 1 || j == 1) a[i][j] = 1;
            else a[i][j] += a[i - 1][j] + a[i][j - 1] + a[i - 1][j - 1];
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}