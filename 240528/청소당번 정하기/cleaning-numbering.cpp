#include <iostream>

int main() {
    int n, a = 0, b = 0, c = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 12 == 0) c++;
        else if (i % 3 == 0) b++;
        else if (i % 2 == 0) a++;
    }
    std::cout << a << " " << b << " " << c;
    return 0;
}