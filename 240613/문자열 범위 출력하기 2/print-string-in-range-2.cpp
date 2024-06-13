#include <iostream>

int main() {
    std::string a;
    int n;
    std::cin >> a >> n;
    for (int i = 1; i <= n; i++) std::cout << a[a.size() - i];
    return 0;
}