#include <iostream>

int main() {
    int n, e = 0;
    std::cin >> n;
    for (int i = 0, a, b, c, d; i < n; i++) {
        std::cin >> a >> b >> c >> d;
        int s = a + b + c + d;
        if ((double)s / 4 >= 60) {
            e++;
            std::cout << "pass";
        } else std::cout << "fail";
        std::cout << "\n";
    }
    std::cout << e;
    return 0;
}