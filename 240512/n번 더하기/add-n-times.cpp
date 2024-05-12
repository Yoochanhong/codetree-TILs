#include <iostream>

int main() {
    int a, n;
    std::cin >> a >> n;
    for (int i = 0; i < n; i++){
        a += n;
        std::cout << a << "\n";
    }
    return 0;
}