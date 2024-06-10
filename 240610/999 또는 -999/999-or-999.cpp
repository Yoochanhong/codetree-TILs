#include <iostream>

int main() {
    int n, a = 1e9, b = -1e9;
    while(std::cin >> n, n != 999 && n != -999){
        if (a > n) a = n;
        if (b < n) b = n;
    }
    std::cout << b << " " << a;
    return 0;
}