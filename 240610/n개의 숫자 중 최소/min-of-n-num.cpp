#include <iostream>
#include <algorithm>

int main() {
    int n, c = 1, a[100];
    std::cin >> n;
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::sort(a, a + n);
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) break;
        c++;
    }
    std::cout << a[0] << " " << c;
    return 0;
}