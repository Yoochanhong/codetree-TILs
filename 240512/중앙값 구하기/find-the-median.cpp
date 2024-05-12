#include <iostream>
int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a < b){
        if (b < c) std::cout << b;
        else std::cout << (a < c ? c : a);
    } else {
        if (a < c) std::cout << a;
        else std::cout << (b < c ? c : b);
    }
    return 0;
}