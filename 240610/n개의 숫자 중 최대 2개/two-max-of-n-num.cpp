#include <iostream>
#include <algorithm>

int main() {
    int n, a[100];
    std::cin >> n;
    for (int i = 0; i < n; i++) std::cin >> a[i];
    std::sort(a, a + n, std::greater<int>());
    std::cout << a[0] << " " << a[1];
    return 0;
}