#include <iostream>

int main() {
    int n, m, x, y, a[11][11] = {};
    std::cin >> n >> m;
    while(m--){
        std::cin >> x >> y;
        a[x][y] = x * y;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}