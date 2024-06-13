#include <iostream>

int main() {
    int n, c = 0, d = 0;
    std::cin >> n;
    std::string a;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        c += a.size();
        d += a[0] == 97 ? 1 : 0;
    }
    std::cout << c << " " << d;
    return 0;
}