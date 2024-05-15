#include <iostream>

int main() {
    int n, a, s = 1e9;
    std::cin >> n >> a;
    for (int i = 1, b; i < n; i++){
        std::cin >> b;
        s = std::min(s, b - a);
        a = b;
    }
    std::cout << s;
    return 0;
}