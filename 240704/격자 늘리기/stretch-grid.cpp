#include <iostream>

int main() {
    char a[101][101];
    int n, m, k;
    std::cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < m; l++) {
                for (int o = 0; o < k; o++) {
                    std::cout << a[i][l];
                }
            }
            std::cout << '\n';
        }
    }
    return 0;
}