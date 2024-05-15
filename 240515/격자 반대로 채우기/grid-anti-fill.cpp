#include <iostream>

int main() {
    int n, a[11][11], b = 0,c = 0;
    std::cin >> n;
    for (int i = n - 1; i >= 0; i--){
        if (c % 2 == 0) for (int j = n - 1; j >= 0; j--) a[j][i] = ++b;
        else for (int j = 0; j < n; j++) a[j][i] = ++b;
        c++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}