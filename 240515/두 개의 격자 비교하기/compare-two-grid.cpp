#include <iostream>

int main() {
    int n, m, a[11][11];
    std::cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0, b; j < m; j++){
            std::cin >> b;
            a[i][j] = a[i][j] != b;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0, b; j < m; j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}