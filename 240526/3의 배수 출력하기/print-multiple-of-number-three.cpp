#include <iostream>

int main() {
    int n, i = 3;
    std::cin >> n;
    while(i <= n){
        std::cout << i << " ";
        i += 3;
    }
    return 0;
}