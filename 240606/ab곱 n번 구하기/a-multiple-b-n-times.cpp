#include <iostream>

int main() {
    int n, a, b;
    std::cin >> n;
    while(n--) {
        std::cin >> a >> b;
        int s = 1;
        for (int i = a; i <= b; i++) s *= i;
        std::cout << s << "\n";
    }
    return 0;
}