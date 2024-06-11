#include <iostream>

int main() {
    int n, m, a[10][10] = {};
    std::cin >> n >> m;
    for (int i = 1,b,c; i <= m; i++) {
        std::cin >> b >> c;
        a[b][c] = i;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}