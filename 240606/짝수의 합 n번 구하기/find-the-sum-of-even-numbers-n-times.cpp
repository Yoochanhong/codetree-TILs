#include <iostream>

int main() {
    int t, a, b;
    std::cin >> t;
    while(t--) {
        std::cin >> a >> b;
        int s = 0;
        for (int i = a; i <= b; i++) if (!(i & 1)) s += i;
        std::cout << s << "\n";
    }
    return 0;
}