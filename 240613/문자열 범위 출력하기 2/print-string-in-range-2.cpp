#include <iostream>
#include <algorithm>

int main() {
    std::string a;
    int n;
    std::cin >> a >> n;
    if (a.size() < n) {
        std::reverse(a.begin(), a.end());
        std::cout << a;
    }
    else for (int i = 1; i <= n; i++) std::cout << a[a.size() - i];
    return 0;
}