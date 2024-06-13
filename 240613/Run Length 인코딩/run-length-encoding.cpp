#include <iostream>

int main() {
    std::string a, b;
    std::cin >> a;
    for (int i = 1, j = 0; i <= a.size(); i++) {
        if (a[i - 1] != a[i]) {
            b += a[i - 1] + std::to_string(j + 1);
            j = 0;
        } else j++;
    }
    std::cout << b.size() << "\n" << b;
    return 0;
}