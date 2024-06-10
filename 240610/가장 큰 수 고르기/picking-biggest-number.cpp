#include <iostream>
#include <algorithm>

int main() {
    int a[10];
    for (int &i : a) std::cin >> i;
    std::sort(a, a + 10);
    std::cout << a[9];
    return 0;
}