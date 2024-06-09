#include <iostream>

int main() {
    int n, a[20] = {1};
    std::cin >> n;
    a[1] = n;
    for (int i = 2; ; i++) {
        a[i] = a[i - 1] + a[i - 2];
        if (a[i] > 100) break;
    }
    for (int i = 0; a[i]; i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}