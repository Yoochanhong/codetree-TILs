#include <iostream>

int main() {
    int n, m, r[10][10];
    std::cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        std::cin >> a >> b;
        r[a][b] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << r[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}