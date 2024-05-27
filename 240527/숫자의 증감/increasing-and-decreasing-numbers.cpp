#include <iostream>

int main() {
    char c;
    int n;
    std::cin >> c >> n;
    if (c == 65) {
        for (int i = 1; i <= n; i++){
            std::cout << i << " ";
        }
    } else {
        for (int i = n; i >= 1; i--){
            std::cout << i << " ";
        }
    }
    return 0;
}