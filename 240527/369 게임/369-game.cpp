#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        std::string a = std::to_string(i);
        std::cout << (i % 3 && a[0] != '3' && a[0] != '6' && a[0] != '9' && a[1] != '3' && a[1] != '6' && a[1] != '9' ? i : 0) << " ";
    }
    return 0;
}