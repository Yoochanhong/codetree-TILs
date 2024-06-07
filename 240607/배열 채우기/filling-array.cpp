#include <iostream>

int main() {
    int a[10], n, i = 0;
    while(i < 11) {
        std::cin >> a[i++];
        if (!a[i - 1]) break;
    }
    for (int j = i - 2; j >= 0; j--) {
        std::cout << a[j] << " ";
    }
    return 0;
}